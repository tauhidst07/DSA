bool checkArmstrong(int n){
	//Write your code here 
	int count=0;  
	int number =n; 
	long long result=0;
	while(number>0){
	    count++; 
		number=number/10;
	}   
	number=n; 
	while(number>0){
		int dig = number%10; 
		result+=pow(dig,count); 
		number/=10;
	}
	return result==n;

}
