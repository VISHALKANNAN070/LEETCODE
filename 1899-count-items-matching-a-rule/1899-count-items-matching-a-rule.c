int countMatches(char*** items, int itemsSize, int* itemsColSize, char* ruleKey, char* ruleValue) {
    int keyValue=0;
    if(strcmp(ruleKey,"type")==0){
        keyValue=0;
    }
    if(strcmp(ruleKey,"color")==0){
        keyValue=1;
    }
    if(strcmp(ruleKey,"name")==0)
    keyValue=2;
    int count=0;
    for(int i=0;i<itemsSize;i++){
        if(strcmp(items[i][keyValue],ruleValue)==0){
            count++;
        }
        }
    return count;
}