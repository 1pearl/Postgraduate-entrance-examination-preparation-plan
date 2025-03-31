#include <stdio.h>
#include <stdlib.h>

//��������
//Ҫǰ����������Ϊ�ڽṹ�����õ���ListNode 
//typedef xxx���� ���� 
typedef struct ListNode ListNode;
 
struct ListNode {
	int value;      //ֵ 
	ListNode *next; //ָ����һ���ڵ��ָ�룬�����ǰ������Ҫʹ��struct ListNode *next; 
};

//�������µĽڵ�
ListNode* CreateNode(int val){
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->value = val;
	newNode->next = NULL;
	return newNode;  
}

//��ӡ���� 
void printNode(ListNode *head){
	ListNode* current = head;
	while(current){
		printf("%d->",current->value);
		current = current->next;
	}
	printf("NULL\n");
}  

int main(){
    // ��������ڵ�
    ListNode* node1 = CreateNode(1);
    ListNode* node2 = CreateNode(2);
    ListNode* node3 = CreateNode(3);
    ListNode* node4 = CreateNode(4);

    // ��������ڵ�
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    
    printNode(node1);
    
    ListNode* current = node1;
    ListNode* next; 
	while(current){
		next = current->next;
		free(current);
		current = next;
	} 
	
	return 0;
} 
