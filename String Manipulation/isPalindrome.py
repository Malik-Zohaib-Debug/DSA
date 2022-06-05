word = str(input("Enter the string: "))
word_length = len(word)
isPalindrome = False
reversed_word = ""
for i in range(1, word_length+1):
    reversed_word += word[-i]
if(word == reversed_word):
    isPalindrome = True
    print(isPalindrome)
else:
    print(isPalindrome)
