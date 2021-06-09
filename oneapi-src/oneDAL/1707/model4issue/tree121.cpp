 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree121(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 24, (DAAL_DATA_TYPE)1.0755000000000001);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 18, (DAAL_DATA_TYPE)0.21850000000000003);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 22, (DAAL_DATA_TYPE)0.96150000000000013);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 27, (DAAL_DATA_TYPE)0.79050000000000009);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 11, (DAAL_DATA_TYPE)-0.43349999999999994);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 19, (DAAL_DATA_TYPE)-1.4444999999999999);
    builder.addLeafNode(treeId, nodeIds[6], 0, (DAAL_DATA_TYPE)0.013731965944170952);
    builder.addLeafNode(treeId, nodeIds[6], 1, (DAAL_DATA_TYPE)0.0013629098561100306);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[5], 1, 5, (DAAL_DATA_TYPE)0.43950000000000006);
    builder.addLeafNode(treeId, nodeIds[9], 0, (DAAL_DATA_TYPE)-0.012035282187420747);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[9], 1, 13, (DAAL_DATA_TYPE)1.1845000000000001);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[11], 0, 21, (DAAL_DATA_TYPE)0.9125000000000002);
    builder.addLeafNode(treeId, nodeIds[12], 0, (DAAL_DATA_TYPE)-0.0011184891204510886);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[12], 1, 19, (DAAL_DATA_TYPE)0.76250000000000007);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[14], 0, 1, (DAAL_DATA_TYPE)0.32150000000000006);
    builder.addLeafNode(treeId, nodeIds[15], 0, (DAAL_DATA_TYPE)-0.0091727450283037287);
    builder.addLeafNode(treeId, nodeIds[15], 1, (DAAL_DATA_TYPE)0.0059192589119724604);
    builder.addLeafNode(treeId, nodeIds[14], 1, (DAAL_DATA_TYPE)-0.015967212929841011);
    builder.addLeafNode(treeId, nodeIds[11], 1, (DAAL_DATA_TYPE)0.0057491315472549924);
    builder.addLeafNode(treeId, nodeIds[4], 1, (DAAL_DATA_TYPE)-0.0032228151900093732);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[3], 1, 9, (DAAL_DATA_TYPE)2.3305000000000002);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[21], 0, 1, (DAAL_DATA_TYPE)-0.56349999999999978);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[22], 0, 24, (DAAL_DATA_TYPE)0.94150000000000011);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[23], 0, 4, (DAAL_DATA_TYPE)-1.5019999999999996);
    builder.addLeafNode(treeId, nodeIds[24], 0, (DAAL_DATA_TYPE)0.01163184046628885);
    builder.addLeafNode(treeId, nodeIds[24], 1, (DAAL_DATA_TYPE)0.00016208800736876585);
    nodeIds[27] = builder.addSplitNode(treeId, nodeIds[23], 1, 7, (DAAL_DATA_TYPE)-0.14449999999999996);
    builder.addLeafNode(treeId, nodeIds[27], 0, (DAAL_DATA_TYPE)0.0034216618963650298);
    builder.addLeafNode(treeId, nodeIds[27], 1, (DAAL_DATA_TYPE)0.015330802024372162);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[22], 1, 15, (DAAL_DATA_TYPE)-1.6139999999999997);
    builder.addLeafNode(treeId, nodeIds[30], 0, (DAAL_DATA_TYPE)-0.01147137500478753);
    builder.addLeafNode(treeId, nodeIds[30], 1, (DAAL_DATA_TYPE)-0.00018983894662898173);
    builder.addLeafNode(treeId, nodeIds[21], 1, (DAAL_DATA_TYPE)-0.010633499866261529);
    nodeIds[34] = builder.addSplitNode(treeId, nodeIds[2], 1, 21, (DAAL_DATA_TYPE)1.5685000000000002);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[34], 0, 18, (DAAL_DATA_TYPE)0.30450000000000005);
    builder.addLeafNode(treeId, nodeIds[35], 0, (DAAL_DATA_TYPE)0.0050164836926898937);
    builder.addLeafNode(treeId, nodeIds[35], 1, (DAAL_DATA_TYPE)2.8930942835261154e-05);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[34], 1, 14, (DAAL_DATA_TYPE)-0.67849999999999999);
    builder.addLeafNode(treeId, nodeIds[38], 0, (DAAL_DATA_TYPE)-0.0046574278771877291);
    builder.addLeafNode(treeId, nodeIds[38], 1, (DAAL_DATA_TYPE)0.0084879917141638308);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[1], 1, 5, (DAAL_DATA_TYPE)0.41850000000000004);
    builder.addLeafNode(treeId, nodeIds[41], 0, (DAAL_DATA_TYPE)0.0095939557607236658);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[41], 1, 0, (DAAL_DATA_TYPE)1.3835000000000002);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[43], 0, 21, (DAAL_DATA_TYPE)1.3785000000000001);
    nodeIds[45] = builder.addSplitNode(treeId, nodeIds[44], 0, 2, (DAAL_DATA_TYPE)0.43550000000000005);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[45], 0, 2, (DAAL_DATA_TYPE)-0.27049999999999996);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[46], 0, 1, (DAAL_DATA_TYPE)-0.27949999999999997);
    builder.addLeafNode(treeId, nodeIds[47], 0, (DAAL_DATA_TYPE)0.004547330384644179);
    builder.addLeafNode(treeId, nodeIds[47], 1, (DAAL_DATA_TYPE)-0.00035642211525035755);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[46], 1, 19, (DAAL_DATA_TYPE)0.41450000000000004);
    builder.addLeafNode(treeId, nodeIds[50], 0, (DAAL_DATA_TYPE)0.0032412219133779959);
    builder.addLeafNode(treeId, nodeIds[50], 1, (DAAL_DATA_TYPE)0.010686756937224189);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[45], 1, 9, (DAAL_DATA_TYPE)0.77250000000000008);
    builder.addLeafNode(treeId, nodeIds[53], 0, (DAAL_DATA_TYPE)-0.004751692399257372);
    builder.addLeafNode(treeId, nodeIds[53], 1, (DAAL_DATA_TYPE)0.0021515489257820934);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[44], 1, 11, (DAAL_DATA_TYPE)-0.54649999999999987);
    nodeIds[57] = builder.addSplitNode(treeId, nodeIds[56], 0, 5, (DAAL_DATA_TYPE)0.91150000000000009);
    builder.addLeafNode(treeId, nodeIds[57], 0, (DAAL_DATA_TYPE)-0.0063061155006289482);
    builder.addLeafNode(treeId, nodeIds[57], 1, (DAAL_DATA_TYPE)0.0073136268606917429);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)-0.0045778416377660917);
    builder.addLeafNode(treeId, nodeIds[43], 1, (DAAL_DATA_TYPE)-0.0011949948245483415);

}