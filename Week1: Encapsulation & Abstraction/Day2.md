# UML Diagram ( Unified Modeling Language )

## UML Class Diagram

| Class Name|
|:--:|
| Properties|
| Methods |

> *The class name is the only mandatory information.*

| Object Name|
|:--:|
| Properties |

> *The object name is the only mandatory information.*

## **Access Modifier**

| Symbol | Access Modifier |
|:--------:|:-----------------:|
| + | Public |
| - | Private |
| # | Protected |
| underlined | Static |
|  | Default |

## **Association** ( Liên kết )

Associations are relationships between classes in a UML Class Diagram.

There is an association that connects the <\<control>> class Class1 and <\<boundary>> class Class2.

![](https://cdn-images.visual-paradigm.com/guide/uml/uml-class-diagram-tutorial/10-simple-association-example.png)

## **Cardinality** ( Bội số quan hệ )

Cardinality is expressed in terms of:

- one to one
- one to many
- many to many

![](https://cdn-images.visual-paradigm.com/guide/uml/uml-class-diagram-tutorial/11-associations-with-different-multiplicies.png)

| Cardinality | Meaning |
|--|--|
| 1 | Chỉ 1 |
| 0..1 | 0 hoặc 1 |
| 0..* | >= 0 |
| * | >= 0 |
| 1..* | >= 1 |
| 2..4 | Specified Range |
| 2,4..6 | Multiple, Disjoint Ranges |

## **Aggregation**
A special type of association : It represents a ***"part of"*** relationship ( whole - part ).

![](https://cdn-images.visual-paradigm.com/guide/uml/uml-class-diagram-tutorial/12-aggregation.png)

- Class2 is part of Class1.
- Many instances (denoted by the *) of Class2 can be associated with Class1.
- Objects of Class1 and Class2 have separate lifetimes.

## **Composition**
A special type of aggregation where parts are destroyed when the whole is destroyed.

![](https://cdn-images.visual-paradigm.com/guide/uml/uml-class-diagram-tutorial/13-composition.png)

- Objects of Class2 live and die with Class1.
- Class2 cannot stand by itself.

![](https://images.viblo.asia/33f383df-0bdc-44e8-97fc-f401b5c0771b.png)

