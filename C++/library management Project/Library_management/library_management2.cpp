#include<iostream>
#include<fstream>
#include<ctime>
#include<string.h>
#include<stdio.h>

using namespace std;
int obs=5,s=0,ir=0;
int pd=-1,pm=-1,py=-1;
class stock{
    public:
    int book_id;
    char author[20];
    int isbn;
    int pages;
    int year;
    int price;
    int no_of_copies;

    void input(){
        cout<<"enter book_id:";
        cin>>book_id;
        cout<<"enter author name:";
        fflush(stdin);
        gets(author);
        cout<<"enter isbn :";
        cin>>isbn;
        cout<<"enter no_of pages:";
        cin>>pages;
        cout<<"enter pub. year:";
        cin>>year;
        cout<<"enter price";
        cin>>price;
        cout<<"no. of copies";
        cin>>no_of_copies;
    }
    void output(){
        cout<<"Book_id:"<<book_id<<" | "<<"Author Name:"<<author<<" | "<<"ISBN no. :"<<isbn<<" | "<<"no. of pages:"<<pages<<" | "<<"Year of Publicition:"<<year<<" | "<<"price:"<<price<<" | "<<"No. of copies"<<no_of_copies<<endl;
    }
};

    stock N;
    stock C;

void present_date(){
            // int i=0;
        time_t now = time(0);
        tm *ltm = localtime(&now);
        py=1900 + ltm->tm_year;
        pm=1 + ltm->tm_mon;
        pd=ltm->tm_mday;
}

void list_display(){
    ifstream l;
    l.open("stock.txt",ios::in);
    for(int x=1;x<=obs;x++){
        l.read((char*)&N,sizeof(N));
        N.output();
    }
    l.close();
}
class issue_list{
    public:
    char st_id[6];
    char name[20];
    int b_id;
    int iday;
    int im;
    int iy;
    int rd;
    int rm;
    int ry;
    issue_list(){
        // int i=0;
        time_t now = time(0);
        tm *ltm = localtime(&now);
        iy=1900 + ltm->tm_year;
        im=1 + ltm->tm_mon;
        iday=ltm->tm_mday;
        rd=-1;
        rm=-1;
        ry=-1;
    }
    ~issue_list(){
    }
    void output(){
        cout<<"st. id :"<<st_id<<" "<<"name :"<<name<<" "<<"id of book issued :"<<b_id<<" "<<"issue date:"<<iday<<"-"<<im<<"-"<<iy<<" ";
        if(rd==-1){
            cout<<"return date: "<<"NIL";
        }
        else{
            cout<<"return date :"<<rd<<"-"<<rm<<"-"<<ry;
        }
    }

};
issue_list IL;
issue_list ILC;
void reading_obs(){
        {ifstream f5;
    f5.open("obs.txt",ios::in);
    f5>>obs;
    f5.close();
    }
}
void reading_ir(){
    ifstream f;
    f.open("ir.txt",ios::in);
    f>>ir;
    f.close();
}
void update_ir(){
    ofstream f;
    f.open("ir.txt",ios::out);
    f<<ir;
    f.close();
}

    void cfile_to_og(){
    int i;
    reading_obs();
    {ifstream f2;
     ofstream f3;
     f2.open("cstock.txt",ios::in);
     f3.open("stock.txt",ios::out);
     for(i=1;i<=obs;i++){
         f2.read((char*)&C,sizeof(C));
         f3.write((char*)&C,sizeof(C));
     }
     f2.close();
     f3.close();
    }
    }

    int search_stock(int id){
               int i;
               ifstream f;
               f.open("stock.txt",ios::in);
               for(i=1;i<=obs;i++){
                f.read((char*)&C,sizeof(C));
                if(C.book_id==id){
                    cout<<"Match found"<<endl;
                    f.close();
                    return(i);
                }
               }
               f.close();
                   return ((obs+100));
    }


 class student{
    private:
    char st_id[6];
    char password[30];
    char name[20];
    int access;

    public:
    friend class admin;
    student(){
        access=1;
    }
    ~student(){}
    int auth(student &S){
        int v;
        cout<<"ENTER UR ST. ID:";
        fflush(stdin);
        gets(st_id);
        cout<<"ENTER UR PASSWORD:";
        fflush(stdin);
        gets(password);
        student R;
        ifstream f;
        int demand=-1;
        f.open("student_auth.txt",ios::in);
        for(v=1;v<=s;v++){
        f.read((char*)&R,sizeof(R));
        if((strcmp(R.st_id,S.st_id)==0) && (strcmp(R.password,S.password)==0) ){
            if(R.access==1){
                int id1;
                cout<<"LOGIN SUCCESSFUL"<<endl;
                cout<<R.name;
                cout<<"enter 1 to issue a book"<<endl;
                cout<<"enter 2 to return a book"<<endl;
                cout<<"enter 3 to request a NOC"<<endl;
                cin>>demand;
                int mtch;
                reading_obs();
                switch(demand){
                    case 1: cout<<"enter book id :";
                            cin>>id1;
                            mtch=search_stock(id1);
                           if(mtch!=(obs+100)){
                               if(C.no_of_copies>0){
                                reading_ir();
                                cout<<"Book Issued";
                                strcpy(IL.st_id,R.st_id);
                                strcpy(IL.name,R.name);
                                ofstream d;
                                d.open("issue_record.txt",ios::app);
                                d.write((char*)&IL,sizeof(IL));
                                d.close();
                                ir++;
                                update_ir();
                                ifstream f1;
                                ofstream f2;
                                f1.open("stock.txt",ios::in);
                                f2.open("cstock.txt",ios::out);
                                for(int t=1;t<=obs;t++){
                                    f1.read((char*)&C,sizeof(C));
                                    if(t==mtch){
                                        C.no_of_copies--;
                                    }
                                    f2.write((char*)&C,sizeof(C));
                                }
                                f2.close();
                                f1.close();
                                cfile_to_og();
                                
                               }
                               else{
                                   cout<<"Sorry this book is out of currently Stock"<<endl;
                               }
                           }
                           break;
                    case 2:  
                               cout<<"Enter the book id u want to return :";
                                cin>>id1;
                                mtch=search_stock(id1);
                                if(mtch!=obs+100){
                                {ifstream f1;
                                ofstream f2;
                                f1.open("stock.txt",ios::in);
                                f2.open("cstock.txt",ios::out);
                                for(int t=1;t<=obs;t++){
                                    f1.read((char*)&C,sizeof(C));
                                    if(t==mtch){
                                        C.no_of_copies++;
                                    }
                                    f2.write((char*)&C,sizeof(C));
                                }
                                f2.close();
                                f1.close();
                                cfile_to_og();}
                                int f=3;    
                                {ifstream f9;
                                ofstream f10;
                                f9.open("issue_record.txt",ios::in);
                                f10.open("cissue_record.txt",ios::out);
                                for(f=1;f<=ir;f++){
                                    f9.read((char*)&ILC,sizeof(ILC));
                                    if((strcmp(ILC.st_id,st_id)==0) && ILC.b_id==id1){

                                        ILC.rd=pd;
                                        ILC.rm=pm;
                                        ILC.ry=py;
                                    }
                                    f10.write((char*)&ILC,sizeof(ILC));
                                }
                                f9.close();
                                f10.close();}
                                {ifstream f9;
                                ofstream f10;
                                f9.open("cissue_record.txt",ios::in);
                                f10.open("issue_record.txt",ios::out);
                                for(f=1;f<=ir;f++){
                                    f9.read((char*)&ILC,sizeof(ILC));
                                    f10.write((char*)&ILC,sizeof(ILC));
                                }
                                f9.close();
                                f10.close();
                                }
                                }
                                break;


                    default: 
                            cout<<"wdww";

                }
            }
            else{
                if(demand==-1){
                cout<<"ACCESS DENIED | MEET THE LIBRARY ADMIN"<<endl;
                return 0;
                }
            }
        }
        }
        cout<<"WRONG CREDENTIALS"<<endl;
        return 0;
    }
    // int id_validation(){
    //     int integers=0,h=0;
    //     int nos[10]={0,1,2,3,4,5,6,7,8,9};
    //     while(st_id[h]!='\0'){
    //         for(int m=0;m<10;m++){
    //             if(st_id[h]==nos[m]){
    //                 integers++;
    //             }
    //         }
    //         h++;
    //     }
    //     if(integers==5){
    //         return(1);
    //     }
    //     else{
    //         return 0;
    //     }


    // }
    int signup(student &S){
        r:{ifstream f7;
          f7.open("s.txt",ios::in);
          f7>>s; 
          f7.close();
          }

        int revt=1;
        cout<<"Enter ur st. id"<<endl;
        fflush(stdin);
        gets(st_id);
        cout<<"enter your name"<<endl;
        fflush(stdin);
        gets(name);

        // revt=id_validation();
        // if(revt==0){
        //     cout<<"NON VALID ST ID"<<endl;
        //     goto r;
        // }
        cout<<"set a password"<<endl;
        fflush(stdin);
        gets(password);
        ofstream f6;
        f6.open("student_auth.txt",ios::app);
        f6.write((char*)&S,sizeof(S));
        f6.close();
        s++;
        {ofstream f7;
        f7.open("s.txt",ios::out);
        f7<<s;
        f7.close();
        }
        return (-1);
    }
};   
student S1;

class admin{
    private:
    char usrname_og[20];
    char password_og[20];
    int i,id;
    public:
    admin(){
        strcpy(usrname_og,"nurav07");
        strcpy(password_og,"70varun");
        i=1;
        id=0;
    }
    ~admin(){
    }

    int action_on_stock(){
    int result=0;
    {ifstream f5;
    f5.open("obs.txt",ios::in);
    f5>>obs;
    f5.close();
    }
    a:
    cout<<"enter 1 to add stock"<<endl;
    cout<<"enter 2 to delete a book from stock"<<endl;
    cout<<"enter 3 to edit book details"<<endl;
    cout<<"enter 4 to display book inventory"<<endl;
    cout<<"enter 5 to display issue records"<<endl;
    cin>>result;
    int match=0;
    int j,id2;    
    switch(result){
        case 1:cout<<"Enter Book Credentials"<<endl;
               N.input();
               {ifstream f;
               f.open("stock.txt",ios::in);
               for(i=1;i<=obs;i++){
                   f.read((char*)&C,sizeof(C));
                   if(N.book_id==C.book_id && N.isbn==C.isbn && N.pages==C.pages && N.year==C.year && N.price==C.price){
                       f.close();
                       match=1;
                       break;
                   }
                }
                if(match==1){
                {ifstream f2;
                ofstream f3;
                f2.open("stock.txt",ios::in);
                f3.open("cstock.txt",ios::out);
                for(j=1;j<=obs;j++){
                f2.read((char*)&C,sizeof(C));
                if(j==i){
                    C.no_of_copies++;
                }          
                f3.write((char*)&C,sizeof(C));
                }
                f2.close();
                f3.close();}
                cfile_to_og();
                }
                else{
                    f.close();
                    {ofstream f2;
                    f2.open("stock.txt",ios::app);
                    f2.write((char*)&N,sizeof(N));
                    obs++;
                    f2.close();
                    }
                }
                break;
                }

        case 4:list_display();
                break;

        case 5:{ifstream r;
                r.open("issue_record.txt",ios::in);
                for(match=1;match<=ir;match++){
                    r.read((char*)&IL,sizeof(IL));
                    IL.output();
                }
                r.close();}


        case 2: cout<<"enter book id:";
                cin>>id2;
                i=search_stock(id2);
               if(i!=(obs+100)){
                {ifstream f2;
                ofstream f3;
                f2.open("stock.txt",ios::in);
                f3.open("cstock.txt",ios::out);
                for(j=1;j<=obs;j++){

                f2.read((char*)&C,sizeof(C));
                if(j==i){
                    continue;
                }
                f3.write((char*)&C,sizeof(C));
                }
                obs--;
                f2.close();
                f3.close();
                ofstream f5;
                f5.open("obs.txt",ios::out);
                f5<<obs;
                f5.close();
                cfile_to_og();
                }

               }
               else{
                   cout<<"No record found for this id"<<endl;
               }
               break;

        case 3: cout<<"enter book id:";
                cin>>id2;
                i=search_stock(id2);
               if(i!=(obs+100)){
                {ifstream f2;
                ofstream f3;
                f2.open("stock.txt",ios::in);
                f3.open("cstock.txt",ios::out);
                for(j=1;j<=obs;j++){
                f2.read((char*)&C,sizeof(C));
                if(j==i){
                    cout<<"OG DETAILS ARE :"<<endl;
                    C.output();
                    cout<<"enter new details"<<endl;
                    C.input();
                }
                f3.write((char*)&C,sizeof(C));
                }
                f2.close();
                f3.close();
                cfile_to_og();
               }
               }
               else{
                   cout<<"No record found for this id"<<endl;
               }
               break;
        
        default: cout<<"WRONG INPUT"<<endl;
                 goto a;
    }
    ofstream f5;
    f5.open("obs.txt",ios::out);
    f5<<obs;
    f5.close();
    cout<<"enter 0 to return to the main menu"<<endl;
    cin>>result;
    if(result==0){
        return 0;
    }
    else{
        return (-1);
    }
    }

    int action_on_student(){
        int action,y,accs,flag=0;
        char id[6];
        st:
        cout<<"Enter student id:";
        fflush(stdin);
        gets(id);
        cout<<"Enter 1 to change access for this id"<<endl;
        cout<<"Enter 2 to calculate fine for this id"<<endl;


        ifstream f;
        ofstream f2;
        f2.open("cstudent_auth.txt",ios::out);
        f.open("student_auth.txt",ios::in);
        for(y=1;y<=s;y++){
            f.read((char*)&S1,sizeof(S1));
            if(strcmp(S1.st_id,id)==0){

                if(S1.access==1){
                    f:
                    flag=1;
                    cout<<"Current status:Enabled"<<endl;
                    cout<<"Enter 0 to disable | 1 to return to the main menu"<<endl;
                    cin>>accs;
                    if(accs==0){
                        S1.access=0;
                        f2.write((char*)&S1,sizeof(S1));
                        return 0;
                    }
                    else{
                        if(accs==1){
                        return 0;
                        }
                        else{
                            cout<<"WRONG INPUT"<<endl;
                            goto f;
                        }
                    }
                }
                else{
                    cout<<"Current status:Disabled"<<endl;
                    cout<<"Enter 0 to enable | 1 to return to the main menu"<<endl;
                    cin>>accs;
                    if(accs==0){
                        S1.access=1;
                        f2.write((char*)&S1,sizeof(S1));
                        return 1;
                    }

                }
            }
            else{
            f2.write((char*)&S1,sizeof(S1));
            }
            f2.close();

        }
        if(flag==0){
            cout<<"No match Found "<<endl;
            goto st;
        }
                    return 0;
    }

    void login_check(){
    char usrname[20];
    char password[20];
    int revert=0;
log:
    cout<<"enter username :";
    fflush(stdin);
    gets(usrname);
    cout<<"enter password :";
    gets(password);
    if((strcmp(password,password_og)==0) && (strcmp(usrname,usrname_og)==0)){
    cout<<"LOGIN SUCCCESSFUL"<<endl;
    m:
    cout<<"Enter 1 for stock related Actions"<<endl;
    cout<<"Enter 2 for student related Actions"<<endl;
    cin>>revert;
    switch(revert){
        case 1:revert=action_on_stock();
               if(revert==0){
                   goto m;
               }
               else{
                   cout<<"LOGGED OUT"<<endl;
                   exit(0);
               }
               break;
        case 2:revert=action_on_student();
        if(revert==1){
            goto m;
        }
        else{
            cout<<"LOGGED OUT"<<endl;
            exit(0);
        }
        break;

        default:cout<<"Wrong Credentiials"<<endl;
    }
    }
    else{
        cout<<"WRONG CREDENTIALS"<<endl;
        goto log;
    }
    }
};

int main(){
    {ifstream f7;
          f7.open("s.txt",ios::in);
          f7>>s; 
          f7.close();
    } 
    int revert=-1;
    s:
    cout<<"Enter 1 for Admin login"<<endl;
    cout<<"Enter 0 for student login & signup"<<endl;
    cin>>revert;
    if(revert==1){
        admin A;
        A.login_check();
    }
    else{
        if(revert==0){
            student S;
            su:
            cout<<"enter 1 to login"<<endl;
            cout<<"enter 2 to signup"<<endl;
            cin>>revert;
            if(revert==1){
                revert=S.auth(S);
                if(revert==0){
                    goto su;
                }
            }
            else{
                if(revert==2){
                    revert=S.signup(S);
                    if(revert==-1){
                        goto s;
                    }
                }
            }
        }
        else{
            cout<<"Wrong input"<<endl;
            goto s;
        }
    }
}