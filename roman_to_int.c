int romanToInt(char *s) {
    int num = 0, size, i;
    size = strlen(s);
    
    for (i = 0; i < size; i++) {
        if (s[i] == 'I') {
            // At first it will reduce 1 in advance the it will add 5/10 which result to 4 & 9
            if (s[i + 1] == 'V' || s[i + 1] == 'X') {
                num -= 1;
            } else {
                num += 1;
            }
        } else if (s[i] == 'V') {
            num += 5;
        } else if (s[i] == 'X') {
            if (s[i + 1] == 'L' || s[i + 1] == 'C') {
                num -= 10;
            } else {
                num += 10;
            }
        } else if (s[i] == 'L') {
            num += 50;
        } else if (s[i] == 'C') {
            if (s[i + 1] == 'D' || s[i + 1] == 'M') {
                num -= 100;
            } else {
                num += 100;
            }
        } else if (s[i] == 'D') {
            num += 500;
        } else if (s[i] == 'M') {
            num += 1000;
        }
    }
    return num;
}
