 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree39(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 22, (DAAL_DATA_TYPE)1.0705000000000002);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 27, (DAAL_DATA_TYPE)0.89550000000000007);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 5, (DAAL_DATA_TYPE)0.88650000000000018);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 25, (DAAL_DATA_TYPE)0.94550000000000012);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 9, (DAAL_DATA_TYPE)1.2355000000000003);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 26, (DAAL_DATA_TYPE)0.76750000000000018);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[6], 0, 23, (DAAL_DATA_TYPE)1.2555000000000003);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[7], 0, 22, (DAAL_DATA_TYPE)0.72250000000000003);
    builder.addLeafNode(treeId, nodeIds[8], 0, (DAAL_DATA_TYPE)0.0035972690100178999);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[8], 1, 27, (DAAL_DATA_TYPE)0.66550000000000009);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[10], 0, 14, (DAAL_DATA_TYPE)-0.55149999999999999);
    builder.addLeafNode(treeId, nodeIds[11], 0, (DAAL_DATA_TYPE)0.0081759192487772785);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[11], 1, 10, (DAAL_DATA_TYPE)0.88150000000000006);
    builder.addLeafNode(treeId, nodeIds[13], 0, (DAAL_DATA_TYPE)-0.0088975340748826664);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[13], 1, 14, (DAAL_DATA_TYPE)0.61450000000000016);
    builder.addLeafNode(treeId, nodeIds[15], 0, (DAAL_DATA_TYPE)-0.0055059349253064119);
    builder.addLeafNode(treeId, nodeIds[15], 1, (DAAL_DATA_TYPE)0.014160075512799351);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[10], 1, 4, (DAAL_DATA_TYPE)-1.3674999999999999);
    builder.addLeafNode(treeId, nodeIds[18], 0, (DAAL_DATA_TYPE)0.0044867340761881608);
    builder.addLeafNode(treeId, nodeIds[18], 1, (DAAL_DATA_TYPE)-0.0085368192950148643);
    builder.addLeafNode(treeId, nodeIds[7], 1, (DAAL_DATA_TYPE)0.0091338724336203405);
    builder.addLeafNode(treeId, nodeIds[6], 1, (DAAL_DATA_TYPE)0.0012052150416544775);
    builder.addLeafNode(treeId, nodeIds[5], 1, (DAAL_DATA_TYPE)0.0081304389896780949);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[4], 1, 11, (DAAL_DATA_TYPE)1.4565000000000003);
    nodeIds[25] = builder.addSplitNode(treeId, nodeIds[24], 0, 13, (DAAL_DATA_TYPE)0.48350000000000004);
    builder.addLeafNode(treeId, nodeIds[25], 0, (DAAL_DATA_TYPE)-0.01707853888129366);
    builder.addLeafNode(treeId, nodeIds[25], 1, (DAAL_DATA_TYPE)-0.004813075984749839);
    builder.addLeafNode(treeId, nodeIds[24], 1, (DAAL_DATA_TYPE)0.0053978542486826583);
    builder.addLeafNode(treeId, nodeIds[3], 1, (DAAL_DATA_TYPE)0.0024672313979214647);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[2], 1, 24, (DAAL_DATA_TYPE)1.0795000000000001);
    builder.addLeafNode(treeId, nodeIds[30], 0, (DAAL_DATA_TYPE)-0.0051372453286410219);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[30], 1, 22, (DAAL_DATA_TYPE)0.75750000000000017);
    builder.addLeafNode(treeId, nodeIds[32], 0, (DAAL_DATA_TYPE)0.0068038793137440313);
    nodeIds[34] = builder.addSplitNode(treeId, nodeIds[32], 1, 26, (DAAL_DATA_TYPE)0.95650000000000002);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[34], 0, 27, (DAAL_DATA_TYPE)1.0925000000000002);
    builder.addLeafNode(treeId, nodeIds[35], 0, (DAAL_DATA_TYPE)-0.014281756856611797);
    builder.addLeafNode(treeId, nodeIds[35], 1, (DAAL_DATA_TYPE)0.0077429380267858509);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[34], 1, 27, (DAAL_DATA_TYPE)0.99050000000000005);
    nodeIds[39] = builder.addSplitNode(treeId, nodeIds[38], 0, 25, (DAAL_DATA_TYPE)1.4475000000000002);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[39], 0, 26, (DAAL_DATA_TYPE)1.1205000000000003);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[40], 0, 16, (DAAL_DATA_TYPE)1.9110000000000003);
    builder.addLeafNode(treeId, nodeIds[41], 0, (DAAL_DATA_TYPE)-0.0029004098547081793);
    builder.addLeafNode(treeId, nodeIds[41], 1, (DAAL_DATA_TYPE)0.010672232694923879);
    builder.addLeafNode(treeId, nodeIds[40], 1, (DAAL_DATA_TYPE)0.01475822361452239);
    builder.addLeafNode(treeId, nodeIds[39], 1, (DAAL_DATA_TYPE)-0.0080380250070546128);
    nodeIds[46] = builder.addSplitNode(treeId, nodeIds[38], 1, 0, (DAAL_DATA_TYPE)1.2625000000000002);
    builder.addLeafNode(treeId, nodeIds[46], 0, (DAAL_DATA_TYPE)-0.00017739674617573393);
    builder.addLeafNode(treeId, nodeIds[46], 1, (DAAL_DATA_TYPE)-0.0082596911392782048);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[1], 1, 25, (DAAL_DATA_TYPE)1.9045000000000003);
    nodeIds[50] = builder.addSplitNode(treeId, nodeIds[49], 0, 24, (DAAL_DATA_TYPE)0.74850000000000005);
    builder.addLeafNode(treeId, nodeIds[50], 0, (DAAL_DATA_TYPE)0.0059054746702070738);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[50], 1, 1, (DAAL_DATA_TYPE)1.8120000000000001);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[52], 0, 18, (DAAL_DATA_TYPE)-0.8284999999999999);
    nodeIds[54] = builder.addSplitNode(treeId, nodeIds[53], 0, 1, (DAAL_DATA_TYPE)-0.38849999999999996);
    builder.addLeafNode(treeId, nodeIds[54], 0, (DAAL_DATA_TYPE)0.0027862506367049172);
    builder.addLeafNode(treeId, nodeIds[54], 1, (DAAL_DATA_TYPE)-0.0056634438190146961);
    nodeIds[57] = builder.addSplitNode(treeId, nodeIds[53], 1, 26, (DAAL_DATA_TYPE)0.85350000000000004);
    builder.addLeafNode(treeId, nodeIds[57], 0, (DAAL_DATA_TYPE)-0.0071074175045770759);
    builder.addLeafNode(treeId, nodeIds[57], 1, (DAAL_DATA_TYPE)0.0037406767538025495);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)-0.01079217416624869);
    builder.addLeafNode(treeId, nodeIds[49], 1, (DAAL_DATA_TYPE)-0.0052316324456649667);

}
