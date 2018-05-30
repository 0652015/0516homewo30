void bubbleSort(const int  *a){
	int i,j,temp;
	int f[5];
	for(i=0;i<5;i++){
		f[i]=a[i];
	}
	for(i=0;i<5;i++) {
		for(j=0;j<4;j++){
			
		if (f[j]>f[j+1]){
			temp=f[j];
			f[j]=f[j+1];
			f[j+1]=temp;
		}
	}
	}
	
printf ("\n2.=");
	for(i=0;i<5;i++){
		printf (" %d ",f[i]);
	}
}
