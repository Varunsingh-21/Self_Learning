#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
using namespace std;
class stock{
    private:
    int book_id;
    char author[20];
    int isbn;
    int pages;
    int year;
    int price;
    int no_of_copies;
    public:
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
};
int main(){
    stock B[5];
    int i;
    ofstream f;
    f.open("stock.txt",ios::out);
    for(i=0;i<5;i++){
        B[i].input();
        f.write((char*)&B[i],sizeof(B[i]));
    }
    f.close();
}