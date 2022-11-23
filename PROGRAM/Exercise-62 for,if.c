 #include<stdio.h>
 main()
 {
     int count,i;
     float weight, height;
     
     count=0;
     printf("Enter weight and height for 10 boys\n");
     
     for(i=1;i<=10;i++)
     {
         scanf("%f %f",&weight,&height);
         if(weight<50&&height>170)
         count=count+1;
     }
     printf("Number of boys with weight<50 kg\n");
     printf("and height>170 cm=%d\n",count);
 }
