file_path="example.txt"
with open(file_path,"w")as file:
    file.write("Hello World!")
with open(file_path,"r")as file:
    content=file.read()
    print("File content:",content)
