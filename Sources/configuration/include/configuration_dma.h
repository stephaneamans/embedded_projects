#ifndef CONFIGURATION_DMA_H
#define CONFIGURATION_DMA_H

/*********************************
 * DMA definitions
 ********************************/
#define DMA1_BASE                            (AHBPERIPH_BASE + 0x00000000U)

/* DMA1 channel 1 configuration                      */
#define DMA1_CH1_BASE                        (AHBPERIPH_BASE + 0x00000008U)
#define DMA1_CH1_MEM2MEM                     true
#define DMA1_CH1_PRIORITY                    0
#define DMA1_CH1_IRQ_PRIORITY                0
#define DMA1_CH1_IRQ_TRANSFER_COMPLETE       false
#define DMA1_CH1_IRQ_HALF_TRANSFER_COMPLETE  false
#define DMA1_CH1_IRQ_TRANSFER_ERROR          false
#define DMA1_CH1_IRQ_TRANSFER_ERROR          false
#define DMA1_CH1_IRQ_CALLBACK                0

/* DMA1 channel 2 configuration                      */
#define DMA1_CH2_BASE                        (AHBPERIPH_BASE + 0x0000001CU)
#define DMA1_CH2_MEM2MEM                     false
#define DMA1_CH2_PRIORITY                    0
#define DMA1_CH2_IRQ_PRIORITY                0
#define DMA1_CH2_IRQ_TRANSFER_COMPLETE       true
#define DMA1_CH2_IRQ_HALF_TRANSFER_COMPLETE  false
#define DMA1_CH2_IRQ_TRANSFER_ERROR          false
#define DMA1_CH2_IRQ_TRANSFER_ERROR          false
#define DMA1_CH2_IRQ_CALLBACK                &spi_dma_ch2_irq_management

/* DMA1 channel 3 configuration                      */
#define DMA1_CH3_BASE                        (AHBPERIPH_BASE + 0x00000030U)
#define DMA1_CH3_MEM2MEM                     false
#define DMA1_CH3_PRIORITY                    0
#define DMA1_CH3_IRQ_PRIORITY                0
#define DMA1_CH3_IRQ_TRANSFER_COMPLETE       false
#define DMA1_CH3_IRQ_HALF_TRANSFER_COMPLETE  false
#define DMA1_CH3_IRQ_TRANSFER_ERROR          false
#define DMA1_CH3_IRQ_TRANSFER_ERROR          false
#define DMA1_CH3_IRQ_CALLBACK                0

/* DMA1 channel 4 configuration                      */
#define DMA1_CH4_BASE                        (AHBPERIPH_BASE + 0x00000044U)
#define DMA1_CH4_MEM2MEM                     true
#define DMA1_CH4_PRIORITY                    0
#define DMA1_CH4_IRQ_PRIORITY                0
#define DMA1_CH4_IRQ_TRANSFER_COMPLETE       false
#define DMA1_CH4_IRQ_HALF_TRANSFER_COMPLETE  false
#define DMA1_CH4_IRQ_TRANSFER_ERROR          false
#define DMA1_CH4_IRQ_TRANSFER_ERROR          false
#define DMA1_CH4_IRQ_CALLBACK                0

/* DMA1 channel 5 configuration                      */
#define DMA1_CH5_BASE                        (AHBPERIPH_BASE + 0x00000058U)
#define DMA1_CH5_MEM2MEM                     true
#define DMA1_CH5_PRIORITY                    0
#define DMA1_CH5_IRQ_PRIORITY                0
#define DMA1_CH5_IRQ_TRANSFER_COMPLETE       false
#define DMA1_CH5_IRQ_HALF_TRANSFER_COMPLETE  false
#define DMA1_CH5_IRQ_TRANSFER_ERROR          false
#define DMA1_CH5_IRQ_TRANSFER_ERROR          false
#define DMA1_CH5_IRQ_CALLBACK                0

/* DMA1 channel 6 configuration                      */
#define DMA1_CH6_BASE                        (AHBPERIPH_BASE + 0x0000006CU)
#define DMA1_CH6_MEM2MEM                     true
#define DMA1_CH6_PRIORITY                    0
#define DMA1_CH6_IRQ_PRIORITY                0
#define DMA1_CH6_IRQ_TRANSFER_COMPLETE       false
#define DMA1_CH6_IRQ_HALF_TRANSFER_COMPLETE  false
#define DMA1_CH6_IRQ_TRANSFER_ERROR          false
#define DMA1_CH6_IRQ_TRANSFER_ERROR          false
#define DMA1_CH6_IRQ_CALLBACK                0

/* DMA1 channel 7 configuration                      */
#define DMA1_CH7_BASE                        (AHBPERIPH_BASE + 0x00000080U)
#define DMA1_CH7_MEM2MEM                     true
#define DMA1_CH7_PRIORITY                    0
#define DMA1_CH7_IRQ_PRIORITY                0
#define DMA1_CH7_IRQ_TRANSFER_COMPLETE       false
#define DMA1_CH7_IRQ_HALF_TRANSFER_COMPLETE  false
#define DMA1_CH7_IRQ_TRANSFER_ERROR          false
#define DMA1_CH7_IRQ_TRANSFER_ERROR          false
#define DMA1_CH7_IRQ_CALLBACK                0

#endif /* CONFIGURATION_DMA_H_ */
