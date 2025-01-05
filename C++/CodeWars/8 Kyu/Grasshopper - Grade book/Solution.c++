char getGrade(int a, int b, int c) {

    int R = (a + b + c) / 3 ;

    if (R >= 90) return 'A' ;
    if (R >= 80) return 'B' ;
    if (R >= 70) return 'C' ;
    if (R >= 60) return 'D' ;


    return 'F' ;
    
}