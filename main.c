   
    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    name[strlen(name)-1] = '\0'; /* remove the newline at the end */
    printf("Enter your name: ");
    fgets(name, 255, stdin);
    first[strlen(first)-1] = '\0'; /* remove the newline at the end */

    printf("Hello world!\n");
    return 0;
    printf("Now enter your last name: ");
    gets(last); /* buffer overflow? what's that? */

    printf("Hello,%s %s!\n", first, last);
    return 0;
}
 