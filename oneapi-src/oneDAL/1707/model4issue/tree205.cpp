 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree205(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 7, (DAAL_DATA_TYPE)0.14550000000000002);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 13, (DAAL_DATA_TYPE)0.32350000000000007);
    builder.addLeafNode(treeId, nodeIds[2], 0, (DAAL_DATA_TYPE)-0.0057153108638039862);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[2], 1, 22, (DAAL_DATA_TYPE)1.8280000000000001);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 22, (DAAL_DATA_TYPE)1.6755000000000002);
    builder.addLeafNode(treeId, nodeIds[5], 0, (DAAL_DATA_TYPE)0.00052433894168665569);
    builder.addLeafNode(treeId, nodeIds[5], 1, (DAAL_DATA_TYPE)-0.0091127862658303901);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[4], 1, 13, (DAAL_DATA_TYPE)1.3965000000000003);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 26, (DAAL_DATA_TYPE)1.7125000000000001);
    builder.addLeafNode(treeId, nodeIds[9], 0, (DAAL_DATA_TYPE)0.015150953439019977);
    builder.addLeafNode(treeId, nodeIds[9], 1, (DAAL_DATA_TYPE)0.0045325583833105421);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[8], 1, 24, (DAAL_DATA_TYPE)1.3235000000000003);
    builder.addLeafNode(treeId, nodeIds[12], 0, (DAAL_DATA_TYPE)0.0045528892055153852);
    builder.addLeafNode(treeId, nodeIds[12], 1, (DAAL_DATA_TYPE)-0.007421671723326047);
    nodeIds[15] = builder.addSplitNode(treeId, nodeIds[1], 1, 11, (DAAL_DATA_TYPE)0.76850000000000007);
    nodeIds[16] = builder.addSplitNode(treeId, nodeIds[15], 0, 18, (DAAL_DATA_TYPE)-0.86649999999999994);
    nodeIds[17] = builder.addSplitNode(treeId, nodeIds[16], 0, 9, (DAAL_DATA_TYPE)1.5245000000000002);
    nodeIds[18] = builder.addSplitNode(treeId, nodeIds[17], 0, 5, (DAAL_DATA_TYPE)0.75150000000000017);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[18], 0, 14, (DAAL_DATA_TYPE)-0.35349999999999993);
    builder.addLeafNode(treeId, nodeIds[19], 0, (DAAL_DATA_TYPE)0.0002774219257249074);
    builder.addLeafNode(treeId, nodeIds[19], 1, (DAAL_DATA_TYPE)-0.0074623848814027094);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[18], 1, 0, (DAAL_DATA_TYPE)1.6055000000000004);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[22], 0, 24, (DAAL_DATA_TYPE)1.4355000000000002);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[23], 0, 26, (DAAL_DATA_TYPE)0.86350000000000005);
    builder.addLeafNode(treeId, nodeIds[24], 0, (DAAL_DATA_TYPE)0.0058940682077297463);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[24], 1, 25, (DAAL_DATA_TYPE)0.7915000000000002);
    builder.addLeafNode(treeId, nodeIds[26], 0, (DAAL_DATA_TYPE)-0.0083816945701837547);
    builder.addLeafNode(treeId, nodeIds[26], 1, (DAAL_DATA_TYPE)-0.00020277579084481345);
    builder.addLeafNode(treeId, nodeIds[23], 1, (DAAL_DATA_TYPE)0.0096967344660134555);
    builder.addLeafNode(treeId, nodeIds[22], 1, (DAAL_DATA_TYPE)-0.0063021309854042144);
    builder.addLeafNode(treeId, nodeIds[17], 1, (DAAL_DATA_TYPE)-0.0078692565068464587);
    nodeIds[32] = builder.addSplitNode(treeId, nodeIds[16], 1, 26, (DAAL_DATA_TYPE)0.57250000000000012);
    builder.addLeafNode(treeId, nodeIds[32], 0, (DAAL_DATA_TYPE)-0.0054496064831159622);
    builder.addLeafNode(treeId, nodeIds[32], 1, (DAAL_DATA_TYPE)0.00079492721859512634);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[15], 1, 26, (DAAL_DATA_TYPE)1.1205000000000003);
    nodeIds[36] = builder.addSplitNode(treeId, nodeIds[35], 0, 19, (DAAL_DATA_TYPE)-1.4849999999999997);
    builder.addLeafNode(treeId, nodeIds[36], 0, (DAAL_DATA_TYPE)-0.012972943894565107);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[36], 1, 7, (DAAL_DATA_TYPE)0.26300000000000007);
    builder.addLeafNode(treeId, nodeIds[38], 0, (DAAL_DATA_TYPE)-0.010198218908661863);
    nodeIds[40] = builder.addSplitNode(treeId, nodeIds[38], 1, 1, (DAAL_DATA_TYPE)1.3405000000000002);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[40], 0, 6, (DAAL_DATA_TYPE)0.42550000000000004);
    nodeIds[42] = builder.addSplitNode(treeId, nodeIds[41], 0, 7, (DAAL_DATA_TYPE)1.5615000000000003);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[42], 0, 27, (DAAL_DATA_TYPE)0.76250000000000007);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[43], 0, 5, (DAAL_DATA_TYPE)0.76550000000000018);
    builder.addLeafNode(treeId, nodeIds[44], 0, (DAAL_DATA_TYPE)-0.0015380697305469463);
    builder.addLeafNode(treeId, nodeIds[44], 1, (DAAL_DATA_TYPE)0.01148928420263387);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[43], 1, 18, (DAAL_DATA_TYPE)-0.24599999999999997);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[47], 0, 13, (DAAL_DATA_TYPE)1.1095000000000004);
    builder.addLeafNode(treeId, nodeIds[48], 0, (DAAL_DATA_TYPE)-0.0041668891197663141);
    builder.addLeafNode(treeId, nodeIds[48], 1, (DAAL_DATA_TYPE)0.0097254992835223691);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[47], 1, 9, (DAAL_DATA_TYPE)0.83850000000000013);
    builder.addLeafNode(treeId, nodeIds[51], 0, (DAAL_DATA_TYPE)-0.0011037453540068652);
    builder.addLeafNode(treeId, nodeIds[51], 1, (DAAL_DATA_TYPE)-0.011189613588309538);
    builder.addLeafNode(treeId, nodeIds[42], 1, (DAAL_DATA_TYPE)-0.0094924724165109872);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[41], 1, 22, (DAAL_DATA_TYPE)0.87850000000000017);
    builder.addLeafNode(treeId, nodeIds[55], 0, (DAAL_DATA_TYPE)-0.0013264584307296154);
    builder.addLeafNode(treeId, nodeIds[55], 1, (DAAL_DATA_TYPE)0.0086977391478580395);
    builder.addLeafNode(treeId, nodeIds[40], 1, (DAAL_DATA_TYPE)-0.011819724431261421);
    nodeIds[59] = builder.addSplitNode(treeId, nodeIds[35], 1, 26, (DAAL_DATA_TYPE)1.1785000000000003);
    builder.addLeafNode(treeId, nodeIds[59], 0, (DAAL_DATA_TYPE)0.010517694641436849);
    builder.addLeafNode(treeId, nodeIds[59], 1, (DAAL_DATA_TYPE)-8.2033196101999946e-05);

}
