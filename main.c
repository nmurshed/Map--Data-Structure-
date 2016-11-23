#include <string.h>
#include "roadmap.h"

int main(int argc, const char* argv[])
{
	char roadInfo[2][EDGE_NAME_SIZE];
	char roadname[ROAD_NAME_SIZE] = "Ring Road";

	/* Add vertex by specifying Vertex Type and Name */
	addVertex(POINT_OF_INTEREST, "DC");
	addVertex(POINT_OF_INTEREST, "MC");
	addVertex(POINT_OF_INTEREST, "EIT");
	addVertex(INTERSECTION, "SLC");
	addVertex(INTERSECTION, "RR");
	addVertex(POINT_OF_INTEREST, "Dana");

	/* Add edge by specifying
	 * the source and destination vertex
	 * one-way or two-way
	 * Speed Limit
	 * Length
	 */
	addEdge("DC", "MC", 1, 30, 6.0);
	addEdge("DC", "RR", 1, 10, 7.0);
	addEdge("MC", "EIT", 1, 20, 5.1);
	addEdge("MC", "SLC", 1, 35, 4.2);
	addEdge("MC", "RR", 1, 10, 5.7);
	addEdge("EIT", "SLC", 1, 15, 2.4);
	addEdge("RR", "SLC", 1, 10, 3.5);
	addEdge("Dana", "RR", 1, 30, 5.7);
	addEdge("Dana", "SLC", 1, 40, 2.2);

	/* Add edge event by specifying the edge info and event type */
	edgeEvent("DC-RR", EVENT_NORMAL);
	edgeEvent("DC-MC", EVENT_ACCIDENT);
	edgeEvent("MC-RR", EVENT_ROADBLOCK);

	strncpy(roadInfo[0], "DC-RR", EDGE_NAME_SIZE);
	strncpy(roadInfo[1], "SLC-EIT", EDGE_NAME_SIZE);

	road(roadInfo, 2, roadname);

	printGraph();

	trip(vertex("DC"), vertex("SLC"));

	store(FILENAME);

	freeGraph();

	retrieve(FILENAME);

	return 0;
}
