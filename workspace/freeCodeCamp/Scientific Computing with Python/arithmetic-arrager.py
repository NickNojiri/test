import re # import for the regex


def arithmetic_arranger(problems, solve = False):
  #this
  #["3 + 855", "3801 - 2" , "45 + 43","123 + 49" ]

  if(len(problems) > 5):
      return "Error: Too many problems."
    
  first = ""
  second = ""
  lines = ""
  sumx = ""
  string = ""
  
  for problem in problems:
    if(re.search("[^\s0-9.+-]", problem)):
      if(re.search("[/]", problem) or re.search("[*]", problem)):
        return "Error: Operator must be '+' or '-'."
      return "Error: Numbers must only contain digits."

    firstNumber = problem.split(" ")[0]
    operator = problem.split(" ")[1]
    secondNumber = problem.split(" ")[2]
    #hwo the code will operate 123, +, 321
    #first = 123
    #operater = + 
    #second = 321

    if(len(firstNumber) >= 5 or len(secondNumber) >= 5):
      return "Error: Numbers cannot be more than four digits."

    #calculate the sum
    sum = ""
    if(operator == "+"):
      sum = str(int(firstNumber) + int(secondNumber))
    elif(operator == "-"):
      sum = str(int(firstNumber) - int(secondNumber))
  
    #formatting 
    length = max(len(firstNumber), len(secondNumber)) + 2
    top = str(firstNumber).rjust(length)
    bottom = operator + str(secondNumber).rjust(length - 1)
    line = ""
    res = str(sum).rjust(length)
    
    for s in range(length):
      line += "-"

    if problem != problems[-1]:
      first += top + "    "
      second += bottom + "    "
      lines += line + "    "
      sumx += res + "    "
    else:
      first += top
      second += bottom
      lines += line
      sumx += res
  
    if solve:
      string = first + "\n" + second + "\n" + lines + "\n" + sumx
    else:
      string = first + "\n" + second + "\n" + lines
      #when last problem change too no spaces
  return string