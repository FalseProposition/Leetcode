/*push函数提示有空指针*/
typedef struct {
    int *base;
    int *top;
    int stacksize;
} MinStack;

/** initialize your data structure here. */
MinStack* minStackCreate(int maxSize) {
    MinStack Stack;
    Stack.base=(int*)malloc(maxSize*sizeof(int));
    Stack.top=Stack.base;
    Stack.stacksize=maxSize;    
    return &Stack;
}

void minStackPush(MinStack* obj, int x) {
    if(obj->top-obj->base>=obj->stacksize){
        obj->base=(int*)realloc(obj->base,(1+obj->stacksize)*sizeof(int));
        if(!obj->base)exit(0);
        obj->top=obj->base+obj->stacksize;
        obj->stacksize+=1;
    }
    *obj->top++=x;
}

void minStackPop(MinStack* obj) {
    if(!obj->top==obj->base)
        obj->top--;
}

int minStackTop(MinStack* obj) {
    if(obj->top==obj->base)return 0; 
    else return *(obj->top-1) ;
}

int minStackGetMin(MinStack* obj) {
    int *p=obj->base;
    int temp=*obj->base;
    while(obj->top-p>=1){
        if(*p<temp)temp=*p;
        p++;
    }
    return temp;
}

void minStackFree(MinStack* obj) {
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * struct MinStack* obj = minStackCreate(maxSize);
 * minStackPush(obj, x);
 * minStackPop(obj);
 * int param_3 = minStackTop(obj);
 * int param_4 = minStackGetMin(obj);
 * minStackFree(obj);
 */
