#include<stdio.h>
#include<unistd.h>
struct resource{
	
	int pen;
	int paper;
	int q_paper;
	int allot_id;
		
};
struct t_resource{
	
	int pen_count ;
	int paper_count ;
	int q_paper_count ;
}; 

int main(){
	struct resource s[3];
	struct t_resource t[3];
	
	int i,j,k,l,m;
	for(i=0;i<3;i++){
		s[i].allot_id=i+1;
	}
	for(i=0;i<3;i++)
	{
		if(s[i].allot_id==1)
		{
			s[i].pen=1;
			s[i].paper=0;
			s[i].q_paper=0;
		}
		if(s[i].allot_id==2)
		{
			s[i].paper=1;
			s[i].pen=0;
			s[i].q_paper=0;
		}
		if(s[i].allot_id==3)
		{
			s[i].q_paper=1;
			s[i].pen=0;
			s[i].paper=0;
		}
	}

	printf("\nResources alloted are:");
	for(i=0;i<3;i++){
		if(s[i].pen == 1)
		{
		printf("\nResources alloted to student %d are : pen ",i);
	    }
		if(s[i].paper==1)
		{
		printf("\nResources alloted to student %d are: paper ",i);
	    }
		if(s[i].q_paper==1)
		{
		printf("\nResources alloted to student %d are: question paper ",i);
	    }
	}

		for(m=0;m<3;m++)
		{			
		     if(m==0){
	       	t[i].paper_count=1;
	     	t[i].pen_count=1;
				for(j=0;j<3;j++){
					if(s[j].q_paper==1){
						printf("\nStudent %d has completed his job !",j+1);
					}
				}
			}
		
			  if(m==1){
				t[i].q_paper_count=1;
				t[i].pen_count=1;
				for(k=0;k<3;k++){
					if(s[k].paper==1){
						printf("\nStudent %d has completed his job !",k+1);
					}
				}
			}
		
			if(m==2){
				t[i].paper_count=1;
				t[i].q_paper_count=1;
				for(l=0;l<3;l++){
					if(s[l].pen==1){
						printf("\nStudent %d has completed his job !",l+1);
					}
				}
			}
		}
	
}
