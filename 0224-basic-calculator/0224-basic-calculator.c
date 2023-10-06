#define MAX 300000
int isEmpty(int *top) {
    if (*top == -1) 
    return (*top == -1);
    else 
    return 0;
}

int push(int stack[], int *top, int value) {
    if (*top == MAX - 1) {
        return -1;
    } else {
        (*top)++;
        stack[*top] = value;
        return value;
    }
}

int pop(int stack[], int *top) {
    if (*top == -1) 
        return -1;
      else {
        int temp = stack[*top];
        (*top)--;
        return temp;
    }
}

void display(int stack[],int top)
{
  int i;
  for(i=0;i<=top;i++)
  {
    printf("%d\n",stack[i]);
  }
}

int atTop(int stack[],int *top)
{
  return stack[*top];
}



int calculate(char * s){
    
    int stack[MAX];
    int top=-1;
    int i=0,num=0,ans=0,sign=1;
 for(i=0;i<strlen(s);i++)
 {
    if(s[i]>='0' && s[i]<='9'){
        num=num*10+(s[i]-'0');
    }
    else if(s[i]=='+')
    {
        ans=ans+(sign*num);
        num=0;
        sign=1;
    }
    else if(s[i]=='-'){
        ans=ans+(sign*num);
        num=0;
        sign=-1;
    }
    else if(s[i]=='('){
        push(stack,&top,ans);
        push(stack,&top,sign);
        num=0;
        ans=0;
        sign=1;
    }
    else if(s[i]==')'){
        ans=ans+(sign*num);
        num=0;
        ans*=pop(stack,&top);
        ans+=pop(stack,&top);
    }
 } 
    if(num!=0)
        ans=ans+(sign*num);
     return ans;
}