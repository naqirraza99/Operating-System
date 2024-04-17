
}-------------*/
int naqi[5][2];
float avg;
int sum;

for(int i=0;i<5;i++)
for(int j=0;j<2;j++)
{
	cout<<" Enter an integer:"<<endl;
	cin>> naqi[i][j];
	 sum= sum + naqi[i][j];
}
	 avg= sum/10;
cout<< " Sum is:"<<sum<<endl;
cout<< " Average is:"<<avg<<endl;
}


