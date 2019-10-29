char *removeDuplicates(char *S){
    int len = strlen(S);
    char *res = (char *)malloc(len + 1);
    
    int top = -1;
    for (int j = 0; j < len; j++) {
        if (top < 0 || S[j] != res[top])
            res[++top] = S[j];
        else
            top--;
    }
    res[++top] = '\0';
    return res;
}

