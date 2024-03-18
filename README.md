# Movie_Ticket_Booking_OOP
   This project provides valuable learning opportunities in several areas:

1. **Data Structures**: You gain a practical understanding of how to use data structures like linked lists and queues to implement real-world systems. You learn how to manipulate these data structures to store and manage information efficiently.

2. **Algorithms**: While the project focuses more on data structure usage, you also learn about basic algorithms such as sorting (e.g., sorting movies by name) and basic queue operations (e.g., enqueue and dequeue).

3. **Object-Oriented Programming (OOP)**: You apply OOP principles like encapsulation, inheritance, and polymorphism to design and implement classes that represent entities in the movie ticket booking system. This helps you understand how to model real-world systems in an object-oriented manner.

4. **Memory Management**: Through the use of dynamic memory allocation and deallocation (e.g., `new` and `delete`), you learn about managing memory to avoid memory leaks and ensure program stability.

5. **User Input Handling**: You learn how to handle user input, validate it, and provide appropriate feedback to the user, improving your skills in creating interactive programs.

6. **Testing and Debugging**: You practice testing your program to ensure it behaves as expected in various scenarios and debugging to fix any issues that arise, enhancing your problem-solving skills.

7. **Software Design**: You gain experience in designing and architecting a small-scale software project, considering factors such as code organization, modularity, and maintainability.

8. **Project Management**: You learn how to break down a larger project into manageable tasks, prioritize them, and work through them systematically, improving your project management skills.

   The project is a simple movie ticket booking system implemented in C++. It allows users to view available movies and show timings, book tickets, and display booked tickets. Here's a summary of what the project does:

1. **Movie Management**: Users can view a list of available movies along with their show timings.

2. **Ticket Booking**: Users can select a movie, show timing, and seat number to book a ticket. The system then adds the ticket to a queue for processing.

3. **Ticket Display**: Users can view a list of booked tickets, including customer name, phone number, and seat number.

4. **Basic UI**: The project provides a basic text-based user interface (UI) for interacting with the system, allowing users to navigate through options using a simple menu.

5. **Data Structures Usage**: The project demonstrates the use of data structures such as linked lists (for storing tickets) and queues (for managing ticket bookings).

6. **Sorting**: The project sorts the list of movies by name, showcasing the use of the `sort` function from the `<algorithm>` library.

7. **Object-Oriented Design**: The project uses classes to represent entities in the system (e.g., `Movie`, `Ticket`, `Node`, `TicketList`, `MovieTicketBookingSystem`), showcasing object-oriented design principles.

One main challenge in this project was managing the complexity of interactions between different components of the system, such as movies, show timings, tickets, and the ticket booking system. This involved ensuring that these components interacted correctly, handling edge cases (e.g., booking a ticket for a sold-out show, ensuring seats are not double-booked), and maintaining a clean and understandable codebase as the project grew in complexity.
