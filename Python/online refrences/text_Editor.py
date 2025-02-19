import os
from tkinter import *
from tkinter import filedialog, colorchooser, font
from tkinter.messagebox import *
from tkinter.filedialog import *


def change_color():
    color = colorchooser.askcolor(title="pick a color...or else")
    # as colorchoose returns a tuple of RGB values at index 0 and hex value of color at index 1
    text_area.config(fg=color[1])


def change_font(*args):
    # args as no. of arguments can vary
    text_area.config(font=(font_name.get(), size_box.get()))


def new_file():
    window.title("Untitled")
    text_area.delete(1.0, END)


def open_file():
    file = askopenfilename(defaultextension=".txt",
                           file=[("All Files", "*.*"),
                                 ("Text Documents", "*.txt")])

    if file is None:
        # if we close the dialogue directly from the cross
        # this will not let the program crash
        return

    else:
        try:
            window.title(os.path.basename(file))
            # gets the file name tht has been opened ,hence setting it to the windows tittle
            text_area.delete(1.0, END)

            file = open(file, "r")

            text_area.insert(1.0, file.read())
            # reading file and pasting its contents in the text area

        except Exception:
            print("couldn't read file")

        finally:
            file.close()


def save_file():
    file = filedialog.asksaveasfilename(initialfile='unititled.txt',
                                        defaultextension=".txt",
                                        filetypes=[("All Files", "*.*"),
                                                   ("Text Documents", "*.txt")])

    if file is None:
        return

    else:
        try:
            window.title(os.path.basename(file))
            file = open(file, "w")

            file.write(text_area.get(1.0, END))

        except Exception:
            print("couldn't save file")

        finally:
            file.close()


def cut():
    # event generator generates or triggers a certain event !!!!!!!!!!?
    text_area.event_generate("<<Cut>>")


def copy():
    text_area.event_generate("<<Copy>>")


def paste():
    text_area.event_generate("<<Paste>>")


def about():
    # show info messagge box
    showinfo("About this program", "This is a program written by YOUUUUU!!!")


def quit():
    # closes the window 
    window.destroy()


window = Tk()
window.title("Text editor program")
file = None
# as currently no file has been selected

window_width = 500
window_height = 500
screen_width = window.winfo_screenwidth() 
# returns screen width of the device
screen_height = window.winfo_screenheight()
# returns screen height of the device

x = int((screen_width / 2) - (window_width / 2))
y = int((screen_height / 2) - (window_height / 2))

window.geometry("{}x{}+{}+{}".format(window_width, window_height, x, y))
# firts 2 for geometry and last 2 fr starting coordinates
font_name = StringVar(window)
# as font name cn b changed on rumtime,+easy to use by using get and set funcs.
font_name.set("Arial")
# initial value

font_size = StringVar(window)
font_size.set("25")

text_area = Text(window, font=(font_name.get(), font_size.get()))

scroll_bar = Scrollbar(text_area)
window.grid_rowconfigure(0, weight=1)
window.grid_columnconfigure(0, weight=1)
text_area.grid(sticky=N + E + S + W)
# these 3 commands to expand the text area to the borders
scroll_bar.pack(side=RIGHT, fill=Y)
# fill=Y????
text_area.config(yscrollcommand=scroll_bar.set)
# giving the scroll bar we created access to text area, by assigning it its own scrollbar

frame = Frame(window)
frame.grid()
# grid?

color_button = Button(frame, text="color", command=change_color)
color_button.grid(row=0, column=0)

font_box = OptionMenu(frame,font_name, *font.families(), command=change_font)
# *font.families() brings all font families accessible
font_box.grid(row=0, column=1)
# spinbox=box with a variable which has arrows to increase or decrease the value/shift up and down
size_box = Spinbox(frame, from_=1, to=100, textvariable=font_size, command=change_font)
size_box.grid(row=0, column=2)

menu_bar = Menu(window)
window.config(menu=menu_bar)

file_menu = Menu(menu_bar, tearoff=0)
menu_bar.add_cascade(label="File", menu=file_menu)
file_menu.add_command(label="New", command=new_file)
file_menu.add_command(label="Open", command=open_file)
file_menu.add_command(label="Save", command=save_file)
file_menu.add_separator()
file_menu.add_command(label="Exit", command=quit)

edit_menu = Menu(menu_bar, tearoff=0)
menu_bar.add_cascade(label="Edit", menu=edit_menu)
edit_menu.add_command(label="Cut", command=cut)
edit_menu.add_command(label="Copy", command=copy)
edit_menu.add_command(label="Paste", command=paste)

help_menu = Menu(menu_bar, tearoff=0)
menu_bar.add_cascade(label="Help", menu=help_menu)
help_menu.add_command(label="About", command=about)

window.mainloop()