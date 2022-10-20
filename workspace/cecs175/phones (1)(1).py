# "Parse" a phone number into three integer variables: the
# area_code, the prefix, and the suffix.

# The phone number can be in one of three formats:
# (AAA) BBB-CCCC
# AAA BBB CCCC
# AAABBBCCCC

phone_number = input("Enter a phone number")

if phone_number[0] == '(':
    area_code = phone_number[1:4]
    prefix = phone_number[6:9]
    suffix = phone_number[10:]
elif phone_number[3] == ' ':
    sp = phone_number.index(" ")
    # sp == ?
    area_code = phone_number[:sp]
    sp2 = phone_number.index(" ", sp + 1)
    # sp2 == ?
    prefix = phone_number[sp+1:sp2]
    suffix = phone_number[sp2+1:]
else:
    parsed = int(phone_number)
    suffix = parsed % 10000
    prefix = (parsed // 10000) % 1000
    area_code = parsed // 10000000

print("Area code {0}, prefix {1}, suffix {2}".format(area_code, prefix, suffix))
