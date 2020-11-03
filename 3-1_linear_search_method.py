print("Nの値を入力してください" )
N = int(input())
print("vの値を入力してください" )
v = int(input())

list_a =  []
for  i in range(N):
    print(("%sの値を入れてください" %(i)))
    list_a.append(int(input()))

exist = False
for list_value in list_a:
    if v == list_value:
        exist = True

if exist == True:
    print("Yes")
else:
    print("NO")