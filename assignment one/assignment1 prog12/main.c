int main()
{
	int fact=1,n=0;
	printf("please enter the number: ");
	scanf("%d",&n);
	while(n<0){
        printf("OOPS! number should be positive, enter it again: ");
        scanf("%d",&n);
    }
	for(int i=1;i<=n;i++){
		fact*=i;
	}


	printf("The factorial of Number %d is: %d\n",n,fact);

	return 0;
}
