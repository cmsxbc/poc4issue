 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree28(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 27, (DAAL_DATA_TYPE)0.90250000000000019);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 9, (DAAL_DATA_TYPE)0.9105000000000002);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 12, (DAAL_DATA_TYPE)1.0000000180025095e-35);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 25, (DAAL_DATA_TYPE)1.0895000000000004);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 25, (DAAL_DATA_TYPE)0.46950000000000003);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 27, (DAAL_DATA_TYPE)0.77250000000000008);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[6], 0, 11, (DAAL_DATA_TYPE)1.0000000180025095e-35);
    builder.addLeafNode(treeId, nodeIds[7], 0, (DAAL_DATA_TYPE)0.0048679954045778746);
    builder.addLeafNode(treeId, nodeIds[7], 1, (DAAL_DATA_TYPE)-0.0071019947109088087);
    builder.addLeafNode(treeId, nodeIds[6], 1, (DAAL_DATA_TYPE)-0.012723771482706071);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[5], 1, 27, (DAAL_DATA_TYPE)0.58750000000000002);
    builder.addLeafNode(treeId, nodeIds[11], 0, (DAAL_DATA_TYPE)-0.010405213094275931);
    builder.addLeafNode(treeId, nodeIds[11], 1, (DAAL_DATA_TYPE)0.0044299775027716645);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[4], 1, 3, (DAAL_DATA_TYPE)1.1755000000000002);
    builder.addLeafNode(treeId, nodeIds[14], 0, (DAAL_DATA_TYPE)-0.0028625749896482094);
    builder.addLeafNode(treeId, nodeIds[14], 1, (DAAL_DATA_TYPE)-0.020084694524606071);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[3], 1, 22, (DAAL_DATA_TYPE)1.0735000000000003);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[17], 0, 17, (DAAL_DATA_TYPE)1.5565000000000002);
    builder.addLeafNode(treeId, nodeIds[18], 0, (DAAL_DATA_TYPE)-0.0037202242040141695);
    builder.addLeafNode(treeId, nodeIds[18], 1, (DAAL_DATA_TYPE)0.0078300613571297053);
    builder.addLeafNode(treeId, nodeIds[17], 1, (DAAL_DATA_TYPE)0.0067728167477374276);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[2], 1, 14, (DAAL_DATA_TYPE)-1.3379999999999999);
    builder.addLeafNode(treeId, nodeIds[22], 0, (DAAL_DATA_TYPE)0.0098161258555333544);
    builder.addLeafNode(treeId, nodeIds[22], 1, (DAAL_DATA_TYPE)0.0032472252918880752);
    nodeIds[25] = builder.addSplitNode(treeId, nodeIds[1], 1, 24, (DAAL_DATA_TYPE)1.0105000000000002);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[25], 0, 22, (DAAL_DATA_TYPE)0.99650000000000005);
    builder.addLeafNode(treeId, nodeIds[26], 0, (DAAL_DATA_TYPE)-0.0083317950191233951);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[26], 1, 24, (DAAL_DATA_TYPE)0.79950000000000021);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[28], 0, 13, (DAAL_DATA_TYPE)1.5545000000000002);
    builder.addLeafNode(treeId, nodeIds[29], 0, (DAAL_DATA_TYPE)0.0018534493003342604);
    builder.addLeafNode(treeId, nodeIds[29], 1, (DAAL_DATA_TYPE)0.015184742044056615);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[28], 1, 25, (DAAL_DATA_TYPE)0.98450000000000004);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[32], 0, 0, (DAAL_DATA_TYPE)0.77350000000000019);
    builder.addLeafNode(treeId, nodeIds[33], 0, (DAAL_DATA_TYPE)0.0066415318452260081);
    builder.addLeafNode(treeId, nodeIds[33], 1, (DAAL_DATA_TYPE)-0.0048851020107365624);
    builder.addLeafNode(treeId, nodeIds[32], 1, (DAAL_DATA_TYPE)-0.0079810397678546693);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[25], 1, 3, (DAAL_DATA_TYPE)1.7675000000000003);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[37], 0, 25, (DAAL_DATA_TYPE)1.9045000000000003);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[38], 0, 9, (DAAL_DATA_TYPE)1.3175000000000001);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[39], 0, 7, (DAAL_DATA_TYPE)-0.66499999999999992);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[40], 0, 22, (DAAL_DATA_TYPE)1.2375000000000003);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[41], 0, 25, (DAAL_DATA_TYPE)1.0255000000000003);
    builder.addLeafNode(treeId, nodeIds[42], 0, (DAAL_DATA_TYPE)0.0028804750255649052);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[42], 1, 4, (DAAL_DATA_TYPE)0.13450000000000004);
    builder.addLeafNode(treeId, nodeIds[44], 0, (DAAL_DATA_TYPE)-0.014731173660304096);
    builder.addLeafNode(treeId, nodeIds[44], 1, (DAAL_DATA_TYPE)-0.00085034136261258808);
    builder.addLeafNode(treeId, nodeIds[41], 1, (DAAL_DATA_TYPE)-0.011400692760944367);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[40], 1, 22, (DAAL_DATA_TYPE)0.87450000000000017);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[48], 0, 25, (DAAL_DATA_TYPE)0.59750000000000003);
    builder.addLeafNode(treeId, nodeIds[49], 0, (DAAL_DATA_TYPE)-0.0047439693695022949);
    builder.addLeafNode(treeId, nodeIds[49], 1, (DAAL_DATA_TYPE)0.011422201523593828);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[48], 1, 17, (DAAL_DATA_TYPE)1.3585000000000003);
    builder.addLeafNode(treeId, nodeIds[52], 0, (DAAL_DATA_TYPE)0.0024932368024103884);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)-0.0054749471157096163);
    builder.addLeafNode(treeId, nodeIds[39], 1, (DAAL_DATA_TYPE)0.0054125150171469676);
    nodeIds[56] = builder.addSplitNode(treeId, nodeIds[38], 1, 17, (DAAL_DATA_TYPE)1.5415000000000003);
    builder.addLeafNode(treeId, nodeIds[56], 0, (DAAL_DATA_TYPE)-0.0079258591419568772);
    builder.addLeafNode(treeId, nodeIds[56], 1, (DAAL_DATA_TYPE)0.0085113496692092328);
    nodeIds[59] = builder.addSplitNode(treeId, nodeIds[37], 1, 11, (DAAL_DATA_TYPE)-0.78449999999999986);
    builder.addLeafNode(treeId, nodeIds[59], 0, (DAAL_DATA_TYPE)0.0035230755201868108);
    builder.addLeafNode(treeId, nodeIds[59], 1, (DAAL_DATA_TYPE)-0.0081927536378026671);

}
