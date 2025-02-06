lor = input()
text = list(input())

keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./"

if lor=='R':
    for i in range(len(text)):
        text[i] = keyboard[keyboard.index(text[i]) - 1]
elif lor =='L':
    for i in range(len(text)):
        text[i] = keyboard[keyboard.index(text[i]) + 1]

print("".join(text))

