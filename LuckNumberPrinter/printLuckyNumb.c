
int printLuckyNumb() {

    srand(time(NULL));
    int myNameIsJeff = rand() % 100 + 1;
    int randomLuckNumbs;
    printf("your luck today is %f%%\n", myNameIsJeff);


    if (myNameIsJeff <= 25) {
        printf("It seems like your luck today is bad");
    } else if (myNameIsJeff >= 25 && myNameIsJeff <= 50) {
        printf("It seems like your luck today is okey");
    } else if (myNameIsJeff <= 75 && myNameIsJeff >= 50) {
        printf("It seems like your luck today is pretty good");
        break;
        printf("It seems like your luck today is pretty good");
    } else {
        printf("your luck today is fire!!");
    }


    return 0;
}
