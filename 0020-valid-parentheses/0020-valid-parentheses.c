#define MAX 10000

bool isEmpty(int *top) {
    if (*top == -1) 
    return true;
    else 
    return false;
}

bool push(int stack[], int *top, int value) {
    if (*top == MAX - 1) {
        return false;
    } else 
    {
        (*top)++;
        stack[*top] = value;
    }
    return true;
}

bool pop(int stack[], int *top) {
    if (*top == -1) {
        return true; // Return a sentinel value to indicate an error
    } else {
        int temp = stack[*top];
        (*top)--;
        return temp;
    }
    return false;
}

int getPara(char a) {
    switch (a) {
        case '(': return 1;
        case '{': return 2;
        case '[': return 3;
        case '<': return 4;
        case ')': return -1;
        case '}': return -2;
        case ']': return -3;
        case '>': return -4;
        default: return 0;
    }
}

int atTop(int stack[],int *top)
{
  return stack[*top];   

}
bool isValid(char * s)
{
 int i = 0,flag=0;
    int top = -1;
    int stack[MAX];
    int n = strlen(s);

    while (i < n) {
        int b = getPara(s[i]);

        if (b > 0) {
            push(stack, &top, b);
        } else
        {
            if (isEmpty(&top)) 
            {
                flag =1;
            } 
            else 
            {   int cb =atTop(stack,&top);
                if (cb==-b) 
                pop(stack, &top);
                else
                flag=1;
            }
        }
        i++;
    }

    if (isEmpty(&top)&&flag==0) 
        return true;
    else 
        return false;

}
