 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree82(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 1, (DAAL_DATA_TYPE)2.2625000000000006);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 5, (DAAL_DATA_TYPE)0.88150000000000006);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 0, (DAAL_DATA_TYPE)1.9155000000000002);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 17, (DAAL_DATA_TYPE)0.73550000000000015);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 9, (DAAL_DATA_TYPE)1.0505000000000002);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 2, (DAAL_DATA_TYPE)-0.44249999999999995);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[6], 0, 27, (DAAL_DATA_TYPE)0.72450000000000003);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[7], 0, 5, (DAAL_DATA_TYPE)0.48950000000000005);
    builder.addLeafNode(treeId, nodeIds[8], 0, (DAAL_DATA_TYPE)-0.0094451511012656354);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[8], 1, 6, (DAAL_DATA_TYPE)-0.34349999999999997);
    builder.addLeafNode(treeId, nodeIds[10], 0, (DAAL_DATA_TYPE)0.0097648982455333082);
    builder.addLeafNode(treeId, nodeIds[10], 1, (DAAL_DATA_TYPE)-0.0030912005019431213);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[7], 1, 18, (DAAL_DATA_TYPE)-1.4144999999999996);
    builder.addLeafNode(treeId, nodeIds[13], 0, (DAAL_DATA_TYPE)0.002619374797425487);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[13], 1, 2, (DAAL_DATA_TYPE)-1.1404999999999996);
    builder.addLeafNode(treeId, nodeIds[15], 0, (DAAL_DATA_TYPE)-0.0054208737235361092);
    builder.addLeafNode(treeId, nodeIds[15], 1, (DAAL_DATA_TYPE)-0.014287526343250648);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[6], 1, 9, (DAAL_DATA_TYPE)0.99650000000000005);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[18], 0, 27, (DAAL_DATA_TYPE)0.58750000000000002);
    builder.addLeafNode(treeId, nodeIds[19], 0, (DAAL_DATA_TYPE)0.0099935483497877921);
    builder.addLeafNode(treeId, nodeIds[19], 1, (DAAL_DATA_TYPE)-0.0018989531729859872);
    builder.addLeafNode(treeId, nodeIds[18], 1, (DAAL_DATA_TYPE)-0.0128327040718152);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[5], 1, 22, (DAAL_DATA_TYPE)1.1395000000000002);
    builder.addLeafNode(treeId, nodeIds[23], 0, (DAAL_DATA_TYPE)0.0034434177304672846);
    builder.addLeafNode(treeId, nodeIds[23], 1, (DAAL_DATA_TYPE)-0.0065025464735097354);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[4], 1, 2, (DAAL_DATA_TYPE)-1.6174999999999999);
    builder.addLeafNode(treeId, nodeIds[26], 0, (DAAL_DATA_TYPE)0.005784772554678577);
    builder.addLeafNode(treeId, nodeIds[26], 1, (DAAL_DATA_TYPE)-0.00046639498211986749);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[3], 1, 5, (DAAL_DATA_TYPE)0.49450000000000005);
    builder.addLeafNode(treeId, nodeIds[29], 0, (DAAL_DATA_TYPE)0.016707920744305566);
    builder.addLeafNode(treeId, nodeIds[29], 1, (DAAL_DATA_TYPE)0.0044550450082789083);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[2], 1, 0, (DAAL_DATA_TYPE)1.7645000000000002);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[32], 0, 15, (DAAL_DATA_TYPE)1.6265000000000003);
    nodeIds[34] = builder.addSplitNode(treeId, nodeIds[33], 0, 15, (DAAL_DATA_TYPE)1.5435000000000001);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[34], 0, 4, (DAAL_DATA_TYPE)-1.6484999999999996);
    builder.addLeafNode(treeId, nodeIds[35], 0, (DAAL_DATA_TYPE)-0.0044663543188396626);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[35], 1, 4, (DAAL_DATA_TYPE)-1.5614999999999999);
    builder.addLeafNode(treeId, nodeIds[37], 0, (DAAL_DATA_TYPE)0.0083458807186356614);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[37], 1, 11, (DAAL_DATA_TYPE)-1.4264999999999997);
    builder.addLeafNode(treeId, nodeIds[39], 0, (DAAL_DATA_TYPE)0.0044731258067916687);
    builder.addLeafNode(treeId, nodeIds[39], 1, (DAAL_DATA_TYPE)0.00074036119825386486);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[34], 1, 12, (DAAL_DATA_TYPE)1.6610000000000003);
    builder.addLeafNode(treeId, nodeIds[42], 0, (DAAL_DATA_TYPE)-0.00048370277509093287);
    builder.addLeafNode(treeId, nodeIds[42], 1, (DAAL_DATA_TYPE)-0.014268620955673132);
    nodeIds[45] = builder.addSplitNode(treeId, nodeIds[33], 1, 6, (DAAL_DATA_TYPE)-0.32249999999999995);
    builder.addLeafNode(treeId, nodeIds[45], 0, (DAAL_DATA_TYPE)-0.0034696595260390534);
    builder.addLeafNode(treeId, nodeIds[45], 1, (DAAL_DATA_TYPE)0.011836473227423781);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[32], 1, 24, (DAAL_DATA_TYPE)2.1485000000000007);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[48], 0, 1, (DAAL_DATA_TYPE)1.3180000000000003);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[49], 0, 4, (DAAL_DATA_TYPE)-0.64699999999999991);
    builder.addLeafNode(treeId, nodeIds[50], 0, (DAAL_DATA_TYPE)0.0028410643576072497);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[50], 1, 10, (DAAL_DATA_TYPE)0.73250000000000004);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[52], 0, 20, (DAAL_DATA_TYPE)2.3265000000000002);
    nodeIds[54] = builder.addSplitNode(treeId, nodeIds[53], 0, 15, (DAAL_DATA_TYPE)0.90250000000000019);
    builder.addLeafNode(treeId, nodeIds[54], 0, (DAAL_DATA_TYPE)0.00093833625204128672);
    builder.addLeafNode(treeId, nodeIds[54], 1, (DAAL_DATA_TYPE)-0.0098078913398479163);
    builder.addLeafNode(treeId, nodeIds[53], 1, (DAAL_DATA_TYPE)-0.010393580797783755);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)0.0040545947849750519);
    builder.addLeafNode(treeId, nodeIds[49], 1, (DAAL_DATA_TYPE)-0.012632646667771042);
    builder.addLeafNode(treeId, nodeIds[48], 1, (DAAL_DATA_TYPE)-0.013148127807653509);
    builder.addLeafNode(treeId, nodeIds[1], 1, (DAAL_DATA_TYPE)-0.010317567363381387);

}