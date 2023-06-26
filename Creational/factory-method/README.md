## Factory Method

Define an interface for creating an object, but let subclasses decide which class to instantiate. 
Separates construction logic from using the object. 


### When to use

* a class cant anticipate the class of objects it must create
* a class wants its subclasses to specify the objects it creates
* classes delegate responsibility to one of several helper subclasses, and you want to localize the knowledge of which helper subclass is the delegate 

### Example

You have a base creator class which has a factory method e.g createProduct()
createProduct() returns a Button interface for example. 
Let Windows and Linux be subclasses of the creator class
Let WindowsButton and LinuxButton be implementations if Button interface.
Then Windows can implement createProduct() to return WindowsButton
And Linux can implement createProduct() to return LinuxButton

### Link
https://refactoring.guru/design-patterns/factory-method#:~:text=Factory%20Method%20is%20a%20creational,objects%20that%20will%20be%20created.