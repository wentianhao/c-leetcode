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
//	//输入二叉树的先序遍历序列，创建二叉链表
//	int ch;
//	//ch=getchar();
//	//scanf("%d", &ch);
//	cin >> ch;
//	if (ch == -1)
//		*t = NULL;//如果读入空格字符，创建空树，T是指向指针的指针,*t就相当于一个bintree指针，专门指向bintnode；
//	else
//	{
//		(*t) = (bintnode*)malloc(sizeof(bintnode));
//		(*t)->data = ch;
//		createbintree(&(*t)->lchild);//根据先序遍历，继续创建左子树，让客户端继续输入
//		createbintree(&(*t)->rchild);//创建完左子树，继续创建右子树
//	} //递归调用，自动返回
//}
//void preorder(bintree t)
//{
//	if (t)
//	{
//		//printf("%d ", t->data);//先访问根结点，再遍历左子树，跟着右子树
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
//void levertravel(bintree t)//层次遍历
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
//	这里的输入要严格按照正确的顺序才能结束.这里要用到二叉树的一个性质,
//	就是说对于有n个节点的二叉树,就有n+1个空域,在这里即为如果你输入了n个
//	元素,那么一定要有n+1个#才会结束迭代过程.
//	*/
//	bintree t = NULL;
//	createbintree(&t);//这样才能改变T，指向指针的指针
//	printf("前序遍历: ");
//	preorder(t);
//	printf("\n中序遍历: ");
//	inorder(t);
//	printf("\n后序遍历: ");
//	postorder(t);
//	printf("\n层次遍历: ");
//	levertravel(t);
//	printf("\n");
//	getchar();
//	return 0;
//}