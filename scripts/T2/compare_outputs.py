def compare_files(original_file_path, new_file_path):
    score = 0
    file_original = open(original_file_path, 'r')
    file_new = open(new_file_path, 'r')

    original_lines = file_original.readlines()
    new_lines = file_new.readlines()
    new_lines_len = len(new_lines)

    total_queries = 0
    for i in range(len(original_lines)):
        if i >= new_lines_len:
            break
        if original_lines[i] == new_lines[i]:
            score += 1
        total_queries += 1

    file_original.close()
    file_new.close()

    return score / total_queries


if __name__ == '__main__':
    # PUEDES REESCRIBIR ESTA SECCION PARA AUTOMATIZAR TU REVISION

    original_file_path = input("Introduce el path del archivo de solucion: ")
    new_file_path = input("Introduce el path del archivo resultado: ")

    score = compare_files(original_file_path, new_file_path)
    print('Score: {}'.format(score))

