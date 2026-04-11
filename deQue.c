		return item;
	}
}

// 데크의 rear 노드의 데이터 필드를 반환하는 연산
element peekRear(DQueType* DQ) {
	element item;
	if (isDeQEmpty(DQ)) {
		printf("\n Linked deQue is empty! \n"); return;
	}
	else {
		item = DQ->rear->data;
		return item;
	}
}

// 데크의 front 노드부터 rear 노드까지 출력하는 연산
void printDQ(DQueType* DQ) {
	DQNode* temp = DQ->front;
	printf("DeQue : [");
	while (temp) {
		printf("%3c", temp->data);
		temp = temp->rlink;
	}
	printf(" ] ");
}
