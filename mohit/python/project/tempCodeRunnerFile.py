import tkinter as tk
import webbrowser

root = tk.Tk()
root.geometry("600x150")

head_label = tk.Label(root, text="Query")
head_label.place(x=0, y=0)

head_label = tk.Label(root, text="Text")
head_label.place(x=0, y=20)

def search():
    webbrowser.open_new(f'https://www.youtube.com/results?search_query={entry.get()}')

def insert_clipboard_data():
    root.clipboard_clear()  # Clear the clipboard
    root.clipboard_append("")  # Append an empty string to ensure the clipboard is cleared
    clipboard_data = root.clipboard_get()
    if clipboard_data:
        text_entry.delete(0, tk.END)
        text_entry.insert(0, clipboard_data)
    root.after(100, insert_clipboard_data)  # Check every 100 milliseconds

entry = tk.Entry(root, width=80)
entry.place(x=50, y=0)

text_entry = tk.Entry(root, width=80)
text_entry.place(x=50, y=20)

search_btn = tk.Button(root, text="Search", background="silver", command=search)
search_btn.place(x=550, y=60)

insert_clipboard_data()  # Start monitoring clipboard

root.mainloop()
