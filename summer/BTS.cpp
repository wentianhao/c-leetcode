////#include<stdio.h>
//#include<iostream>
//#include<stdlib.h>
//#include<queue>
//using namespace std;
//typedef int datatype;
//typedef struct node
//{
//	datatype data;
//	struct node *lchild, *rchild;
//}bintnode;
//typedef bintnode *bintree;
//
//void createbintree(bintree *t)
//{
//	//���������������������У�������������
//	int ch;
//	//ch=getchar();
//	//scanf("%d", &ch);
//	cin >> ch;
//	if (ch == -1)
//		*t = NULL;//�������ո��ַ�������������T��ָ��ָ���ָ��,*t���൱��һ��bintreeָ�룬ר��ָ��bintnode��
//	else
//	{
//		(*t) = (bintnode*)malloc(sizeof(bintnode));
//		(*t)->data = ch;
//		createbintree(&(*t)->lchild);//������������������������������ÿͻ��˼�������
//		createbintree(&(*t)->rchild);//����������������������������
//	} //�ݹ���ã��Զ�����
//}
//void preorder(bintree t)
//{
//	if (t)
//	{
//		//printf("%d ", t->data);//�ȷ��ʸ���㣬�ٱ���������������������
//		cout << t->data << " ";
//		preorder(t->lchild);
//		preorder(t->rchild);
//	}
//
//}
//void inorder(bintree t)
//{
//	if (t)
//	{
//		inorder(t->lchild);
//		//printf("%d ", t->data);//
//		cout << t->data << " ";
//		inorder(t->rchild);
//	}
//}
//void postorder(bintree t)
//{
//	if (t)
//	{
//		postorder(t->lchild);
//		postorder(t->rchild);
//		cout << t->data << " ";
//		//printf("%d ", t->data);//
//	}
//}
//
//void levertravel(bintree t)//��α���
//{
//	queue<bintree>q;
//	if (t != NULL)
//		q.push(t);
//	bintree b;
//	while (!q.empty())
//	{
//		b = q.front();
//		
//		//printf("%d ", b->data);
//		cout << b->data << " ";
//		q.pop();
//		if (b->lchild)
//			q.push(b->lchild);
//		if (b->rchild)
//			q.push(b->rchild);
//
//	}
//}
//
//int main()
//{
//
//	/*
//	���������Ҫ�ϸ�����ȷ��˳����ܽ���.����Ҫ�õ���������һ������,
//	����˵������n���ڵ�Ķ�����,����n+1������,�����ＴΪ�����������n��
//	Ԫ��,��ôһ��Ҫ��n+1��#�Ż������������.
//	*/
//	bintree t = NULL;
//	createbintree(&t);//�������ܸı�T��ָ��ָ���ָ��
//	printf("ǰ�����: ");
//	preorder(t);
//	printf("\n�������: ");
//	inorder(t);
//	printf("\n�������: ");
//	postorder(t);
//	printf("\n��α���: ");
//	levertravel(t);
//	printf("\n");
//	getchar();
//	return 0;
//}