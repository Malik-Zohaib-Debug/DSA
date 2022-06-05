def checkFrequency(word):
  dict = {}
  for n in word:
    keys = dict.keys()
    if n in keys:
      dict[n] += 1
    else:
      dict[n] = 1
  return dict

word = str(input("Enter the string: "))
print(checkFrequency(word))