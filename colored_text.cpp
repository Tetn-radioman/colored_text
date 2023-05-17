#include <string>

int main(int argc, char** argv) {

    printf("\n");
    printf("\x1B[31mTexting 1 \033[0m\t\t");
    printf("\x1B[32mTexting 2 \033[0m\t\t");
    printf("\x1B[33mTexting 3 \033[0m\t\t");
    printf("\x1B[34mTexting 4 \033[0m\t\t");
    printf("\x1B[35mTexting 5 \033[0m\n");

    printf("\x1B[36mTexting 6 \033[0m\t\t");
    printf("\x1B[36;4mTexting 7 \033[0m\t\t");
    printf("\x1B[36mTexting 8 \033[0m\t\t");
    printf("\x1B[37mTexting 9 \033[0m\t\t");
    printf("\x1B[93mTexting 10\033[0m\n");

    printf("\033[3;42;30mTexting 11\033[0m\t\t");
    printf("\033[3;43;30mTexting 12\033[0m\t\t");
    printf("\033[3;44;30mTexting 13\033[0m\t\t");
    printf("\033[3;104;30mTexting 14\033[0m\t\t");
    printf("\033[3;100;30mTexting 15\033[0m\n");

    printf("\033[3;47;35mTexting 16\033[0m\t\t");
    printf("\033[2;47;35mTexting 17\033[0m\t\t");
    printf("\033[1;47;35mTexting 18\033[0m\t\t");
    printf("\033[180;4mTexting 19\033[0m\t\t");//для тестов
    printf("\x1B[35mTexting 20 \033[0m\n");//для тестов

    printf("\t\t");
    printf("\n");

    system("pause");
    


    return 0;
}