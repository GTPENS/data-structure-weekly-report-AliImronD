//Nama: Ali Imron Dimyati
//NRP: 5223600003


void Queue::add(int value) {
    Node* temp = new Node(value, nullptr);
    if (head == nullptr) {
        head = tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
    count++;
}
