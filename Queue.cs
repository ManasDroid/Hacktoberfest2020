using System;
using System.Collections;
using System.Linq;

namespace QueueApp
{
  public class Queue<T>
  {
        private readonly int _capacity;
        private int _size;
        private T[] _internalArray;
        public Queue(int capacity)
        {
            if (capacity <= 0)
            {
                throw new ArgumentOutOfRangeException(nameof(capacity));
            }
            _capacity = capacity;
            _internalArray = new T[capacity];
            rear = _capacity - 1;
        }

        public bool IsEmpty => _size == 0;
        public bool IsFull => _size == _capacity;

        int rear { get; set; }
        int front { get; set; }

        public int Enqueue(T item)
        {
            if (IsFull)
                throw new Exception("No space left!");
            rear = (rear + 1) % _capacity;
            _internalArray[rear] = item;
            return ++_size;
        }
        public T Dequeue()
        {
            if (IsEmpty)
                throw new Exception("No items int the queue!");
            T result = _internalArray[front];
            _internalArray[front] = default;
            front = (front + 1) % _capacity;
            _size--;
            return result;
        }

        public T Front => IsEmpty ? default : _internalArray[front];
        public T Rear => IsEmpty ? default : _internalArray[rear];
    }

    class a
    {
        public int v;
    }

    class Program
    {
        static void AddToQueue<T>(Queue<T> queue, T i)
        {
            try
            {
                queue.Enqueue(i);
            }
            catch(Exception ex)
            {
                Console.WriteLine(ex.Message);
            }
            Console.WriteLine($"Full {queue.IsFull} Rear {queue.Rear} Front {queue.Front}");
        }

        static void RemoveFromQueue<T>(Queue<T> queue)
        {
            try
            {
                T item = queue.Dequeue();
                Console.WriteLine($"dequeued {item}");
            }
            catch(Exception ex)
            {
                Console.WriteLine(ex.Message);
            }
            Console.WriteLine($"Full {queue.IsFull} Rear {queue.Rear} Front {queue.Front}");
        }

        static void f(System.Collections.Generic.IEnumerable<a> l)
        {
            foreach(var p in l)
            {
                p.v *= -1;
            }
        }

        static void Main(string[] args)
        {
            var queue = new Queue<int>(5);
            AddToQueue(queue, 1);
            AddToQueue(queue, 5);
            AddToQueue(queue, 7);
            AddToQueue(queue, 3);
            AddToQueue(queue, 2);
            AddToQueue(queue, 8);
            RemoveFromQueue(queue);
            AddToQueue(queue, 8);

            var aa = new System.Collections.Generic.List<a> { new a { v = -1 }, new a { v = -2 } };
            f(aa.Skip(0).Take(1));
            f(aa.Skip(1).Take(1));
            foreach(var p in aa)
            {
                Console.WriteLine($"{p.v}");
            }


            Console.ReadKey();
        }
    }
}
