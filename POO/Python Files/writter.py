variable_name_init = "a{"
variable_name_final = "} = "
func_name_init = "imread('Music_Symbols/"
image_complement = "_BN_"
func_name_final = ".bmp);"

print("Tipo de nota:")
note_type = input()



print("Quantidade de autores:")
autor_lenght = int(input())

autor_name = ["Agata", "Agnes", "Ali"]
autor_note_init = [1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 3]
autor_note_final = [1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 3]

for i in range(autor_lenght):
    autor_name[i] = input()
    autor_note_init[i] = int(input())
    autor_note_final[i] = int(input())

k = 1
for i in range(autor_lenght):
    x = autor_note_final[i] - autor_note_init[i]
    for j in range(x):
        print(variable_name_init + variable_name_final +
            func_name_init + note_type + "/" + autor_name[i]
            + image_complement + str(autor_note_init[i]) + func_name_final)
        autor_note_init[i] = autor_note_init[i] + 1
