 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree168(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 21, (DAAL_DATA_TYPE)0.58250000000000013);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 22, (DAAL_DATA_TYPE)0.76950000000000018);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 14, (DAAL_DATA_TYPE)-0.5914999999999998);
    builder.addLeafNode(treeId, nodeIds[3], 0, (DAAL_DATA_TYPE)-0.0079173804622971362);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[3], 1, 10, (DAAL_DATA_TYPE)0.55650000000000011);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 2, (DAAL_DATA_TYPE)-0.19049999999999997);
    builder.addLeafNode(treeId, nodeIds[6], 0, (DAAL_DATA_TYPE)0.0018809841254786139);
    builder.addLeafNode(treeId, nodeIds[6], 1, (DAAL_DATA_TYPE)-0.0064664079710685957);
    builder.addLeafNode(treeId, nodeIds[5], 1, (DAAL_DATA_TYPE)0.0070328899001812235);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[2], 1, 5, (DAAL_DATA_TYPE)1.4125000000000003);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[10], 0, 2, (DAAL_DATA_TYPE)-0.67149999999999987);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[11], 0, 6, (DAAL_DATA_TYPE)-0.074499999999999983);
    builder.addLeafNode(treeId, nodeIds[12], 0, (DAAL_DATA_TYPE)0.0065415083268289308);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[12], 1, 18, (DAAL_DATA_TYPE)0.17350000000000002);
    builder.addLeafNode(treeId, nodeIds[14], 0, (DAAL_DATA_TYPE)-0.010448409259940188);
    builder.addLeafNode(treeId, nodeIds[14], 1, (DAAL_DATA_TYPE)0.00044493763115107347);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[11], 1, 17, (DAAL_DATA_TYPE)0.46450000000000008);
    builder.addLeafNode(treeId, nodeIds[17], 0, (DAAL_DATA_TYPE)0.0010737371828519937);
    builder.addLeafNode(treeId, nodeIds[17], 1, (DAAL_DATA_TYPE)0.0074543356193517395);
    builder.addLeafNode(treeId, nodeIds[10], 1, (DAAL_DATA_TYPE)-0.0046137725870157116);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[1], 1, 22, (DAAL_DATA_TYPE)0.72750000000000015);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[21], 0, 25, (DAAL_DATA_TYPE)0.33150000000000007);
    builder.addLeafNode(treeId, nodeIds[22], 0, (DAAL_DATA_TYPE)-0.0042667043121422041);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[22], 1, 2, (DAAL_DATA_TYPE)1.3075000000000003);
    nodeIds[25] = builder.addSplitNode(treeId, nodeIds[24], 0, 26, (DAAL_DATA_TYPE)0.89050000000000018);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[25], 0, 21, (DAAL_DATA_TYPE)0.71950000000000014);
    builder.addLeafNode(treeId, nodeIds[26], 0, (DAAL_DATA_TYPE)-0.0014307395851408894);
    builder.addLeafNode(treeId, nodeIds[26], 1, (DAAL_DATA_TYPE)0.0063566331311634156);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[25], 1, 17, (DAAL_DATA_TYPE)0.46950000000000003);
    builder.addLeafNode(treeId, nodeIds[29], 0, (DAAL_DATA_TYPE)-0.0065977091901004321);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[29], 1, 21, (DAAL_DATA_TYPE)0.77850000000000008);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[31], 0, 26, (DAAL_DATA_TYPE)1.1055000000000004);
    builder.addLeafNode(treeId, nodeIds[32], 0, (DAAL_DATA_TYPE)0.00089281692247216912);
    builder.addLeafNode(treeId, nodeIds[32], 1, (DAAL_DATA_TYPE)0.013981031794101002);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[31], 1, 7, (DAAL_DATA_TYPE)-1.1589999999999996);
    builder.addLeafNode(treeId, nodeIds[35], 0, (DAAL_DATA_TYPE)-0.0070497133955359469);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[35], 1, 22, (DAAL_DATA_TYPE)0.68050000000000022);
    builder.addLeafNode(treeId, nodeIds[37], 0, (DAAL_DATA_TYPE)0.0047252699584165152);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[37], 1, 7, (DAAL_DATA_TYPE)0.51550000000000018);
    builder.addLeafNode(treeId, nodeIds[39], 0, (DAAL_DATA_TYPE)0.0031158323266676498);
    builder.addLeafNode(treeId, nodeIds[39], 1, (DAAL_DATA_TYPE)-0.0068585629998282951);
    builder.addLeafNode(treeId, nodeIds[24], 1, (DAAL_DATA_TYPE)-0.0029677211586385966);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[21], 1, 13, (DAAL_DATA_TYPE)0.39750000000000008);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[43], 0, 7, (DAAL_DATA_TYPE)0.68450000000000022);
    nodeIds[45] = builder.addSplitNode(treeId, nodeIds[44], 0, 10, (DAAL_DATA_TYPE)0.88150000000000006);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[45], 0, 14, (DAAL_DATA_TYPE)-0.20349999999999999);
    builder.addLeafNode(treeId, nodeIds[46], 0, (DAAL_DATA_TYPE)0.0024934172057672534);
    builder.addLeafNode(treeId, nodeIds[46], 1, (DAAL_DATA_TYPE)-0.0068016432144484204);
    builder.addLeafNode(treeId, nodeIds[45], 1, (DAAL_DATA_TYPE)0.0068912883046204632);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[44], 1, 3, (DAAL_DATA_TYPE)0.98450000000000004);
    builder.addLeafNode(treeId, nodeIds[50], 0, (DAAL_DATA_TYPE)0.0025176730501698334);
    builder.addLeafNode(treeId, nodeIds[50], 1, (DAAL_DATA_TYPE)0.015071288440376522);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[43], 1, 5, (DAAL_DATA_TYPE)1.6890000000000003);
    builder.addLeafNode(treeId, nodeIds[53], 0, (DAAL_DATA_TYPE)-0.00049077800044714382);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[53], 1, 15, (DAAL_DATA_TYPE)1.0755000000000001);
    builder.addLeafNode(treeId, nodeIds[55], 0, (DAAL_DATA_TYPE)0.0024496118066769132);
    nodeIds[57] = builder.addSplitNode(treeId, nodeIds[55], 1, 2, (DAAL_DATA_TYPE)0.095500000000000015);
    nodeIds[58] = builder.addSplitNode(treeId, nodeIds[57], 0, 24, (DAAL_DATA_TYPE)0.97150000000000014);
    builder.addLeafNode(treeId, nodeIds[58], 0, (DAAL_DATA_TYPE)-0.0026253394283503439);
    builder.addLeafNode(treeId, nodeIds[58], 1, (DAAL_DATA_TYPE)-0.014337857067584992);
    builder.addLeafNode(treeId, nodeIds[57], 1, (DAAL_DATA_TYPE)0.0024431176432934141);

}
