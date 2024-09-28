int main() {
    int age, iscitizen;
    printf("Enter  age ");
    scanf("%d", &age);
    printf("Are you a citizen (1 for Yes, 0 for No) ");
    scanf("%d", &iscitizen);
    if (can_vote(age, iscitizen)) {
        printf("You are eligible to vote");
    }
     else {
        printf("You are not eligible to vote");
    }

    return 0;
}