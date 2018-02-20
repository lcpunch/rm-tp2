#include <stdio.h>

class FileManager {
    int option;
  public:
    void setOption (int);
    void execute();
};

void FileManager::setOption (int option) {

    this->option = option;

}

void FileManager::execute() {

    if(option == 1) {

        FILE *fp;
        fp = fopen("test.txt", "w+");
        fprintf(fp, "This is testing for fprintf...\n");
        fclose(fp);
    }
}

int main() {

    FileManager manager;

    printf("SVP, choisissez une option:\n");
    printf("1 - Creer une liste d'etudiants\n");
    printf("2 - Charger la liste a partir d'un fichier\n");
    printf("999 - Quitter l'application\n");

    int option = 0;

    do {
        scanf("%i", &option);
        manager.setOption(option);
        manager.execute();



    } while (option != 999);

    printf("Merci d'avoir utilisé l'application\n");

    return 0;
}
