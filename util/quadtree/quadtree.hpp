#include <iostream>
#include "util/vec2/vec2.hpp"

class QuadTree
{
public:
    QuadTree() {}

    struct Body
    {
        double theX, theY;
        double theVelX, theVelY;
        double theAccX, theAccY;
        double theMass;
    };

    struct Node
    {
        double theCenterX, theCenterY;
        double theHalfSize;
        double theTotMass;
        double theCenterOfMassX;
        double theCenterOfMassY;

        Body* theBody;
        Node* theChildren[4]; // 0: NW 1: NE 2: SW 3: SE
    };

    static Node* makeNode(double aCenterX, double aCenterY, double aHalfSize) {
        return new Node(aCenterX, aCenterY, aHalfSize, 0, aCenterX, aCenterY, NULL, { NULL, NULL, NULL, NULL });
    }

    Node* theHead;

    void insertBody(Body* aBody) {}

    void subdivideNode(Node* aNode) {}

    void computeForce(Node* aNode, Body* aBody, double aTheta, Vec2 aVec2) {}

    void debug() 
    {
        std::cout << "Debugging QuadTree!\n";
    }
};