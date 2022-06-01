#include <stdio.h>
#include <stdlib.h>

int main(){
    char *srcpath = "testing.txt";
    char *destination = "../moved_folder/testing_moved.txt";

    if(rename("testing.txt","MST/moved.txt")){
        printf("FILE GAGAL DIPINDAH");
    }else{
        printf("FILE BERHASIL DIPINDAH")
    }
    return 0;
}