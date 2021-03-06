 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree86(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 25, (DAAL_DATA_TYPE)2.1950000000000007);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 5, (DAAL_DATA_TYPE)2.0060000000000007);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 26, (DAAL_DATA_TYPE)0.72850000000000004);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 23, (DAAL_DATA_TYPE)0.97950000000000015);
    builder.addLeafNode(treeId, nodeIds[4], 0, (DAAL_DATA_TYPE)-0.0098390233702957634);
    builder.addLeafNode(treeId, nodeIds[4], 1, (DAAL_DATA_TYPE)-0.00091075474977871129);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[3], 1, 9, (DAAL_DATA_TYPE)0.68950000000000011);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[7], 0, 21, (DAAL_DATA_TYPE)1.0925000000000002);
    nodeIds[9] = builder.addSplitNode(treeId, nodeIds[8], 0, 21, (DAAL_DATA_TYPE)1.0535000000000003);
    nodeIds[10] = builder.addSplitNode(treeId, nodeIds[9], 0, 27, (DAAL_DATA_TYPE)1.3195000000000003);
    nodeIds[11] = builder.addSplitNode(treeId, nodeIds[10], 0, 26, (DAAL_DATA_TYPE)1.0535000000000003);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[11], 0, 3, (DAAL_DATA_TYPE)1.2425000000000004);
    builder.addLeafNode(treeId, nodeIds[12], 0, (DAAL_DATA_TYPE)0.0018118535424118548);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[12], 1, 24, (DAAL_DATA_TYPE)1.1915000000000002);
    builder.addLeafNode(treeId, nodeIds[14], 0, (DAAL_DATA_TYPE)-0.0012948425894137472);
    builder.addLeafNode(treeId, nodeIds[14], 1, (DAAL_DATA_TYPE)-0.012847530895045825);
    builder.addLeafNode(treeId, nodeIds[11], 1, (DAAL_DATA_TYPE)0.0056461940613993702);
    builder.addLeafNode(treeId, nodeIds[10], 1, (DAAL_DATA_TYPE)-0.0078402540739625683);
    builder.addLeafNode(treeId, nodeIds[9], 1, (DAAL_DATA_TYPE)-0.013806177154183389);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[8], 1, 26, (DAAL_DATA_TYPE)0.87550000000000006);
    builder.addLeafNode(treeId, nodeIds[20], 0, (DAAL_DATA_TYPE)0.012090373225510121);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[20], 1, 2, (DAAL_DATA_TYPE)-0.38299999999999995);
    nodeIds[23] = builder.addSplitNode(treeId, nodeIds[22], 0, 20, (DAAL_DATA_TYPE)1.0000000180025095e-35);
    builder.addLeafNode(treeId, nodeIds[23], 0, (DAAL_DATA_TYPE)0.015354122943244876);
    builder.addLeafNode(treeId, nodeIds[23], 1, (DAAL_DATA_TYPE)-0.0012279450724070723);
    nodeIds[26] = builder.addSplitNode(treeId, nodeIds[22], 1, 0, (DAAL_DATA_TYPE)1.1775000000000002);
    builder.addLeafNode(treeId, nodeIds[26], 0, (DAAL_DATA_TYPE)-0.0053261530322005167);
    builder.addLeafNode(treeId, nodeIds[26], 1, (DAAL_DATA_TYPE)0.0081819865366686961);
    nodeIds[29] = builder.addSplitNode(treeId, nodeIds[7], 1, 0, (DAAL_DATA_TYPE)1.2835000000000003);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[29], 0, 6, (DAAL_DATA_TYPE)1.2175000000000002);
    nodeIds[31] = builder.addSplitNode(treeId, nodeIds[30], 0, 3, (DAAL_DATA_TYPE)0.28550000000000003);
    builder.addLeafNode(treeId, nodeIds[31], 0, (DAAL_DATA_TYPE)0.0060781576487217229);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[31], 1, 21, (DAAL_DATA_TYPE)1.2185000000000004);
    nodeIds[34] = builder.addSplitNode(treeId, nodeIds[33], 0, 21, (DAAL_DATA_TYPE)1.1775000000000002);
    nodeIds[35] = builder.addSplitNode(treeId, nodeIds[34], 0, 26, (DAAL_DATA_TYPE)1.4545000000000001);
    builder.addLeafNode(treeId, nodeIds[35], 0, (DAAL_DATA_TYPE)0.00059512650978509312);
    nodeIds[37] = builder.addSplitNode(treeId, nodeIds[35], 1, 9, (DAAL_DATA_TYPE)1.6235000000000002);
    nodeIds[38] = builder.addSplitNode(treeId, nodeIds[37], 0, 0, (DAAL_DATA_TYPE)0.59150000000000003);
    builder.addLeafNode(treeId, nodeIds[38], 0, (DAAL_DATA_TYPE)0.0084854476573858785);
    builder.addLeafNode(treeId, nodeIds[38], 1, (DAAL_DATA_TYPE)-0.0033223377389096937);
    builder.addLeafNode(treeId, nodeIds[37], 1, (DAAL_DATA_TYPE)0.017613958399742842);
    builder.addLeafNode(treeId, nodeIds[34], 1, (DAAL_DATA_TYPE)0.0096883644946874729);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[33], 1, 14, (DAAL_DATA_TYPE)-0.25449999999999995);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[43], 0, 4, (DAAL_DATA_TYPE)0.84150000000000003);
    builder.addLeafNode(treeId, nodeIds[44], 0, (DAAL_DATA_TYPE)-0.0083636048787493044);
    builder.addLeafNode(treeId, nodeIds[44], 1, (DAAL_DATA_TYPE)0.0032956960257785072);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[43], 1, 18, (DAAL_DATA_TYPE)-1.2414999999999998);
    builder.addLeafNode(treeId, nodeIds[47], 0, (DAAL_DATA_TYPE)-0.010199434395068355);
    nodeIds[49] = builder.addSplitNode(treeId, nodeIds[47], 1, 17, (DAAL_DATA_TYPE)0.63650000000000018);
    builder.addLeafNode(treeId, nodeIds[49], 0, (DAAL_DATA_TYPE)0.011593897640705109);
    nodeIds[51] = builder.addSplitNode(treeId, nodeIds[49], 1, 13, (DAAL_DATA_TYPE)0.93650000000000022);
    builder.addLeafNode(treeId, nodeIds[51], 0, (DAAL_DATA_TYPE)-0.0057051770500282746);
    builder.addLeafNode(treeId, nodeIds[51], 1, (DAAL_DATA_TYPE)0.0043870428531412407);
    builder.addLeafNode(treeId, nodeIds[30], 1, (DAAL_DATA_TYPE)-0.0033614473869366685);
    nodeIds[55] = builder.addSplitNode(treeId, nodeIds[29], 1, 1, (DAAL_DATA_TYPE)1.3995000000000002);
    builder.addLeafNode(treeId, nodeIds[55], 0, (DAAL_DATA_TYPE)-0.0015373060813051627);
    builder.addLeafNode(treeId, nodeIds[55], 1, (DAAL_DATA_TYPE)-0.0093975220502791369);
    nodeIds[58] = builder.addSplitNode(treeId, nodeIds[2], 1, 0, (DAAL_DATA_TYPE)1.8945000000000001);
    builder.addLeafNode(treeId, nodeIds[58], 0, (DAAL_DATA_TYPE)0.0061847295424407251);
    builder.addLeafNode(treeId, nodeIds[58], 1, (DAAL_DATA_TYPE)-0.0023683616066012872);
    builder.addLeafNode(treeId, nodeIds[1], 1, (DAAL_DATA_TYPE)-0.0037958792667756448);

}
