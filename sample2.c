#include <string.h>
#include <stdio.h>
#include "roadmap.h"

int main(int argc, const char* argv[])
{
	/* Add vertex by specifying Vertex Type and Name */
	addVertex(POINT_OF_INTEREST, "Downsview");
	addVertex(POINT_OF_INTEREST, "Yorkdale");
	addVertex(POINT_OF_INTEREST, "Glencairn");
	addVertex(POINT_OF_INTEREST, "Wilson");
	addVertex(POINT_OF_INTEREST, "Lawrence West");
	addVertex(POINT_OF_INTEREST, "Eglinton West");
	addVertex(POINT_OF_INTEREST, "St. Claire West");
	addVertex(POINT_OF_INTEREST, "Dupont");
	addVertex(POINT_OF_INTEREST, "Spadina");
	addVertex(POINT_OF_INTEREST, "Museum");
	addVertex(POINT_OF_INTEREST, "Queen's Park");
	addVertex(POINT_OF_INTEREST, "St. Patrick");
	addVertex(POINT_OF_INTEREST, "Osgoode");
	addVertex(POINT_OF_INTEREST, "St. Andrew");
	addVertex(POINT_OF_INTEREST, "Union");
	addVertex(POINT_OF_INTEREST, "King");
	addVertex(POINT_OF_INTEREST, "Queen");
	addVertex(POINT_OF_INTEREST, "Dundas");
	addVertex(POINT_OF_INTEREST, "College");
	addVertex(POINT_OF_INTEREST, "Wellesley");
	addVertex(POINT_OF_INTEREST, "Sherbourne");
	addVertex(INTERSECTION, "Bloor Yonge");
	addVertex(POINT_OF_INTEREST, "Rosedale");
	addVertex(POINT_OF_INTEREST, "Summerhill");
	addVertex(POINT_OF_INTEREST, "St. Claire");
	addVertex(POINT_OF_INTEREST, "Davisville");
	addVertex(POINT_OF_INTEREST, "Eglinton");
	addVertex(POINT_OF_INTEREST, "Lawrence");
	addVertex(POINT_OF_INTEREST, "York Mills");
	addVertex(POINT_OF_INTEREST, "Sheppard");
	addVertex(POINT_OF_INTEREST, "North York");
	addVertex(POINT_OF_INTEREST, "Finch");
	addVertex(POINT_OF_INTEREST, "Kipling");
	addVertex(POINT_OF_INTEREST, "Islington");
	addVertex(POINT_OF_INTEREST, "Royal York");
	addVertex(POINT_OF_INTEREST, "Old Mill");
	addVertex(POINT_OF_INTEREST, "Jane");
	addVertex(POINT_OF_INTEREST, "Runnymede");
	addVertex(POINT_OF_INTEREST, "High Park");
	addVertex(POINT_OF_INTEREST, "Keele");
	addVertex(POINT_OF_INTEREST, "Dundas West");
	addVertex(POINT_OF_INTEREST, "Lansdowne");
	addVertex(POINT_OF_INTEREST, "Differin");
	addVertex(POINT_OF_INTEREST, "Ossington");
	addVertex(POINT_OF_INTEREST, "Christie");
	addVertex(POINT_OF_INTEREST, "Bathurst");
	addVertex(INTERSECTION,"St. George");
	addVertex(POINT_OF_INTEREST, "Bay");
	addVertex(POINT_OF_INTEREST, "Castle Frank");
	addVertex(POINT_OF_INTEREST, "Broadsview");
	addVertex(POINT_OF_INTEREST, "Chester");
	addVertex(POINT_OF_INTEREST, "Pape");
	addVertex(POINT_OF_INTEREST, "Donlands");
	addVertex(POINT_OF_INTEREST, "Greenwood");
	addVertex(POINT_OF_INTEREST, "Coxwell");
	addVertex(POINT_OF_INTEREST, "Woodbine");
	addVertex(POINT_OF_INTEREST, "Main Street");
	addVertex(POINT_OF_INTEREST, "Victoria Park");
	addVertex(POINT_OF_INTEREST, "Warden");
	addVertex(POINT_OF_INTEREST, "Kennedy");

	/* Add edge by specifying
	 * the source and destination vertex
	 * one-way or two-way
	 * Speed Limit
	 * Length
	 */
	addEdge("Downsview", "Wilson", 1, 30, 6.0);
	addEdge("Wilson", "Yorkdale", 1, 30, 10.0);
	addEdge("Yorkdale", "Lawrence West", 1, 0, 9);
	addEdge("Lawrence West", "Glencairn", 1, 30, 11.0);
	addEdge("Glencairn", "Eglinton West", 1, 30, 20.0);
	addEdge("Eglinton West", "St. Claire West", 1, 30, 1.0);
	addEdge("St. Claire West", "Dupont", 1, 30, 10.0);
	addEdge("Dupont", "Spadina", 1, 30, 20.0);
	addEdge("Spadina", "St. George", 1, 30, 7.0);
	addEdge("St. George", "Museum", 1, 30, 9.0);
	addEdge("Museum", "Queen's Park", 1, 30, 2.0);
	addEdge("Queen's Park", "St. Patrick", 1, 30, 3.0);
	addEdge("St. Patrick", "Osgoode", 1, 30, 4.0);
	addEdge("Osgoode", "St. Andrew", 1, 30, 5.0);
	addEdge("St. Andrew", "Union", 1, 30, 9.0);
	addEdge("Union", "King", 1, 30, 1.0);
	addEdge("King", "Queen", 1, 30, 6.0);
	addEdge("Queen", "Dundas", 1, 30, 6.0);
	addEdge("Dundas", "College", 1, 30, 6.0);
	addEdge("College", "Wellesley", 1, 30, 6.0);
	addEdge("Wellesley", "Bloor Yonge", 1, 30, 6.0);
	addEdge("Bloor Yonge", "Rosedale", 1, 30, 6.0);
	addEdge("Rosedale", "Summerhill", 1, 30, 6.0);
	addEdge("Summerhill", "St. Claire", 1, 30, 6.0);
	addEdge("St. Claire", "Davisville", 1, 30, 6.0);
	addEdge("Davisville", "Eglinton", 1, 30, 6.0);
	addEdge("Eglinton", "Lawrence", 1, 30, 6.0);
	addEdge("Lawrence", "York Mills", 1, 30, 6.0);
	addEdge("York Mills", "Sheppard", 1, 30, 6.0);
	addEdge("Sheppard", "North York", 1, 30, 6.0);
	addEdge("North York", "Finch", 1, 30, 6.0);
	addEdge("Kipling", "Islington", 1, 30, 6.0);
	addEdge("Islington", "Royal York", 1, 30, 6.0);
	addEdge("Royal York", "Old Mill", 1, 30, 6.0);
	addEdge("Old Mill", "Jane", 1, 30, 6.0);
	addEdge("Jane", "Runnymede", 1, 30, 6.0);
	addEdge("Runnymede", "High Park", 1, 30, 6.0);
	addEdge("High Park", "Keele", 1, 30, 6.0);
	addEdge("Dundas West", "Lansdowne", 1, 30, 6.0);
	addEdge("Lansdowne", "Differin", 1, 30, 6.0);
	addEdge("Differin", "Ossington", 1, 30, 6.0);
	addEdge("Ossington", "Christie", 1, 30, 6.0);
	addEdge("Christie", "Bathurst", 1, 30, 6.0);
	addEdge("Bathurst", "St. George", 1, 30, 6.0);
	addEdge("St. George", "Bay", 1, 30, 6.0);
	addEdge("Bay", "Bloor Yonge", 1, 30, 6.0);
	addEdge("Bloor Yonge", "Sherbourne", 1, 30, 6.0);
	addEdge("Sherbourne", "Castle Frank", 1, 30, 6.0);
	addEdge("Castle Frank", "Broadsview", 1, 30, 6.0);
	addEdge("Broadsview", "Chester", 1, 30, 6.0);
	addEdge("Chester", "Pape", 1, 30, 6.0);
	addEdge("Pape", "Donlands", 1, 30, 6.0);
	addEdge("Donlands", "Greenwood", 1, 30, 6.0);
	addEdge("Greenwood", "Coxwell", 1, 30, 6.0);
	addEdge("Coxwell", "Woodbine", 1, 30, 6.0);
	addEdge("Woodbine", "Main Street", 1, 30, 6.0);
	addEdge("Main Street", "Victoria Park", 1, 30, 6.0);
	addEdge("Victoria Park", "Warden", 1, 30, 6.0);
	addEdge("Warden", "Kennedy", 1, 30, 6.0);
	addEdge("Dundas", "Pape", 1, 30, 6.0);
	addEdge("St. Claire", "Dupont", 1, 30, 6.0);

	/* Add edge event by specifying the edge info and event type */
	//edgeEvent("Warden-Kennedy", 5);

	printGraph();

	trip(vertex("GrEnwood"),vertex("Finch"));

	store(FILENAME);

	freeGraph();

	retrieve(FILENAME);

	freeGraph();

	return 0;
}
