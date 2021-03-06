 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree96(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 27, (DAAL_DATA_TYPE)0.90250000000000019);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 27, (DAAL_DATA_TYPE)0.89950000000000008);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 26, (DAAL_DATA_TYPE)0.9255000000000001);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 27, (DAAL_DATA_TYPE)0.84050000000000014);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 19, (DAAL_DATA_TYPE)1.7085000000000001);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 26, (DAAL_DATA_TYPE)0.76750000000000018);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[6], 0, 0, (DAAL_DATA_TYPE)1.5795000000000001);
    builder.addLeafNode(treeId, nodeIds[7], 0, (DAAL_DATA_TYPE)-0.0011970498520052768);
    builder.addLeafNode(treeId, nodeIds[7], 1, (DAAL_DATA_TYPE)0.0050741637662305673);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[6], 1, 4, (DAAL_DATA_TYPE)0.38350000000000006);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[10], 0, 14, (DAAL_DATA_TYPE)-0.95749999999999991);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[11], 0, 22, (DAAL_DATA_TYPE)0.90250000000000019);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[12], 0, 10, (DAAL_DATA_TYPE)-0.38849999999999996);
    builder.addLeafNode(treeId, nodeIds[13], 0, (DAAL_DATA_TYPE)0.00022875553575055354);
    builder.addLeafNode(treeId, nodeIds[13], 1, (DAAL_DATA_TYPE)-0.013422943783863897);
    builder.addLeafNode(treeId, nodeIds[12], 1, (DAAL_DATA_TYPE)0.0017749536133399519);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[11], 1, 13, (DAAL_DATA_TYPE)0.47050000000000003);
    builder.addLeafNode(treeId, nodeIds[17], 0, (DAAL_DATA_TYPE)0.0096697212350554777);
    builder.addLeafNode(treeId, nodeIds[17], 1, (DAAL_DATA_TYPE)0.0027257355078108333);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[10], 1, 6, (DAAL_DATA_TYPE)-1.6324999999999996);
    builder.addLeafNode(treeId, nodeIds[20], 0, (DAAL_DATA_TYPE)-0.010098656695133643);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[20], 1, 7, (DAAL_DATA_TYPE)0.72450000000000003);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[22], 0, 4, (DAAL_DATA_TYPE)0.55850000000000011);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[23], 0, 13, (DAAL_DATA_TYPE)0.85550000000000004);
    builder.addLeafNode(treeId, nodeIds[24], 0, (DAAL_DATA_TYPE)-0.015348500572144985);
    builder.addLeafNode(treeId, nodeIds[24], 1, (DAAL_DATA_TYPE)0.00032894838756571213);
    nodeIds[27] = builder.addSplitNode(treeId, nodeIds[23], 1, 2, (DAAL_DATA_TYPE)0.73650000000000004);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[27], 0, 22, (DAAL_DATA_TYPE)0.80750000000000022);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[28], 0, 6, (DAAL_DATA_TYPE)0.29550000000000004);
    builder.addLeafNode(treeId, nodeIds[29], 0, (DAAL_DATA_TYPE)0.010575447822439261);
    builder.addLeafNode(treeId, nodeIds[29], 1, (DAAL_DATA_TYPE)-0.0034169117490259501);
    builder.addLeafNode(treeId, nodeIds[28], 1, (DAAL_DATA_TYPE)-0.0036098371291982722);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[27], 1, 27, (DAAL_DATA_TYPE)0.7965000000000001);
    builder.addLeafNode(treeId, nodeIds[33], 0, (DAAL_DATA_TYPE)0.0094441414733106906);
    builder.addLeafNode(treeId, nodeIds[33], 1, (DAAL_DATA_TYPE)-0.0050775790749036757);
    nodeIds[36] = builder.addSplitNode(treeId, nodeIds[22], 1, 13, (DAAL_DATA_TYPE)1.1445000000000001);
    builder.addLeafNode(treeId, nodeIds[36], 0, (DAAL_DATA_TYPE)0.0068017169969474397);
    builder.addLeafNode(treeId, nodeIds[36], 1, (DAAL_DATA_TYPE)-0.0042768108456031134);
    builder.addLeafNode(treeId, nodeIds[5], 1, (DAAL_DATA_TYPE)-0.0093939430503682669);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[4], 1, 2, (DAAL_DATA_TYPE)1.3715000000000004);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[40], 0, 18, (DAAL_DATA_TYPE)1.0075000000000001);
    builder.addLeafNode(treeId, nodeIds[41], 0, (DAAL_DATA_TYPE)-0.00027273736978318059);
    builder.addLeafNode(treeId, nodeIds[41], 1, (DAAL_DATA_TYPE)-0.010579375127951304);
    builder.addLeafNode(treeId, nodeIds[40], 1, (DAAL_DATA_TYPE)-0.011332340711461646);
    nodeIds[45] = builder.addSplitNode(treeId, nodeIds[3], 1, 7, (DAAL_DATA_TYPE)0.063500000000000015);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[45], 0, 17, (DAAL_DATA_TYPE)0.55150000000000021);
    builder.addLeafNode(treeId, nodeIds[46], 0, (DAAL_DATA_TYPE)0.0077189976287384832);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[46], 1, 25, (DAAL_DATA_TYPE)1.5585000000000002);
    builder.addLeafNode(treeId, nodeIds[48], 0, (DAAL_DATA_TYPE)0.0031128551611848375);
    builder.addLeafNode(treeId, nodeIds[48], 1, (DAAL_DATA_TYPE)-0.0058110827633312771);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[45], 1, 0, (DAAL_DATA_TYPE)0.66750000000000009);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[51], 0, 25, (DAAL_DATA_TYPE)0.82050000000000012);
    builder.addLeafNode(treeId, nodeIds[52], 0, (DAAL_DATA_TYPE)-0.017761720535000441);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)-6.252311790982883e-05);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[51], 1, 3, (DAAL_DATA_TYPE)0.73050000000000004);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[55], 0, 7, (DAAL_DATA_TYPE)1.2485000000000002);
    builder.addLeafNode(treeId, nodeIds[56], 0, (DAAL_DATA_TYPE)-0.0052505245086337839);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)0.00472737115289254);
    builder.addLeafNode(treeId, nodeIds[55], 1, (DAAL_DATA_TYPE)0.0047122552916407587);
    builder.addLeafNode(treeId, nodeIds[2], 1, (DAAL_DATA_TYPE)0.012011201381683351);
    builder.addLeafNode(treeId, nodeIds[1], 1, (DAAL_DATA_TYPE)-0.00072167416969673394);

}
