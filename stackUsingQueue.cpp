void push(queue<int> &q, int element) 
{
    q.push(element);
}
int pop(queue<int> &q)
{
    int datasize = q.size()-1;
    int value;
    int data;
    for (int x = 0; x < datasize; ++x)
    {
        value = q.front();
        q.push(value);
        q.pop();
    }
    data = q.front();
    q.pop();
    return data;
}
