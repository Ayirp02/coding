f=open("c:\\Users\\harika\\Desktop\\hari priya\\demo.py","r")
print("The file pointer is at byte:",f.tell())
f.seek(10);
print("After reading  ,the file pointer is at:",f.tell())
