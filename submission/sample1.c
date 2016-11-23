#include <string.h>
#include <stdio.h>
#include "roadmap.h"

int main(int argc, const char* argv[])
{
	char roadInfo[2][EDGE_NAME_SIZE];
	char roadname[ROAD_NAME_SIZE];

	/* Test case - Add vertex by specifying Vertex Type and Name */
	addVertex(POINT_OF_INTEREST, "DavisCentre");
	addVertex(POINT_OF_INTEREST, "MC");
	addVertex(POINT_OF_INTEREST, "EIT");
	addVertex(INTERSECTION, "SLC");
	addVertex(INTERSECTION, "RR");
	addVertex(POINT_OF_INTEREST, "Dana");

	/**
	 * Add edge by specifying
	 * the source and destination vertex
	 * one-way or two-way
	 * Speed Limit
	 * Length
	 */
        /* Test case - add edge with given properties*/
	addEdge("DavisCentre", "MC", ONE_WAY, 30, 6.0);
	addEdge("DavisCentre", "RR", TWO_WAY, 10, 7.0);
	addEdge("MC", "EIT", TWO_WAY, 20, 5.1);
	addEdge("MC", "SLC", ONE_WAY, 30, 4.2);
	addEdge("MC", "RR", ONE_WAY, 10, 5.7);
	addEdge("EIT", "SLC", ONE_WAY, 15, 2.4);
	addEdge("RR", "SLC", TWO_WAY, 10, 3.5);
	addEdge("Dana", "RR", TWO_WAY, 30, 5.7);
	addEdge("Dana", "SLC", TWO_WAY, 40, 2.2);
	addEdge("Dana", "SLC", TWO_WAY, 40, 2.2);

	/** Display the current graph */
	printGraph();

	/** Test case - Add edge event by specifying the edge info and event type */
	edgeEvent("DC-RR", EVENT_NORMAL);
	edgeEvent("DC-MC", EVENT_ACCIDENT);
	edgeEvent("MC-RR", EVENT_ROADBLOCK);

	/* Test case - Add road name for DC-RR and RR-DANA */
	strncpy(roadname, "Ring Road", ROAD_NAME_SIZE);
	strncpy(roadInfo[0], "DC-RR", EDGE_NAME_SIZE);
	strncpy(roadInfo[1], "RR-Dana", EDGE_NAME_SIZE);
	road(roadInfo, 2, roadname);

	/** Display the current graph */
	printGraph();

	/*Test case - Find the path between 2 locations*/
	trip(vertex("DavisCentre"), vertex("SLC"));

        /*Testcase - Random POI name as departure point*/
        printf("Testcase - Random POI name as departure point\n");
	trip(vertex("123"), vertex("SLC"));

        /*Testcase - Same POI names as input*/
        printf("Testcase - Same POI names as input\n");
	trip(vertex("DavisCentre"), vertex("DavisCentre"));

        /*Testcase - Random POI names as destination point*/
        printf("Testcase - Random POI names as destination point\n");
	trip(vertex("DavisCentre"), vertex("ABC"));

	/*Testcase - Find the path with POI name having different cases than original */
	printf("Testcase - Find the path with POI name having different cases than original\n");
	trip(vertex("devisCentre"), vertex("SLC"));

	/** Check error conditions */
	printf("Testcase - Looking for an unknown vertex\n");
	printf("Vertex Info %s\n", vertex("AJ"));

	/*Test case -  Store the graph */
	store(FILENAME);

	/** Clear all graph structures */
	freeGraph();

	/* Test case - Retrieve previously saved graph */
	retrieve(FILENAME);

	/** Clear all graph structures */
	freeGraph();

	return 0;
}
